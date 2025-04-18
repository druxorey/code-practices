# Structs and Files

1) **E01-product-structures**: In a store, there are different types of products. Each product has a code, a description, a name, and a price. There are several types of products. Each type of product has a name, a code, and 10 products.

    1. Define the data structures to store a product and to store a type of product.
    2. Suppose we have an array with 5 types of products and we want to increase the price of all products of a type with code C by 10%.
    3. Write a function that, given a product code P, searches for the product in the entire data structure and returns true if the product exists or false otherwise.

2) **E02-point-distance**: A point in 3 dimensions has three coordinates X, Y, Z. Define a record to represent them. Using the previously defined record, write a function that calculates the distance between the points.

3) **E03-letter-frequency**: Develop an algorithm that reads all the characters from a file named `letters.in`, counts the frequency of each letter in the file, and prints this frequency on the screen. Uppercase and lowercase letters should not be differentiated. Characters that are not letters should be counted in a separate category called "Extra Characters".

4) **E04-people-filter**: Given a file `people.in` with information about people, write an algorithm that reads the file and loads it into an array of records. Then, store in another file `adults.out` only the ages followed by a `;` and the IDs of people who are over 18 years old. People who do not meet this condition should be displayed on the screen.

The first line of the `people.in` file contains the number N of people stored in the file. For each person, there will be a line with their ID, then a line with their full name, then a line with their age, and finally a line with their gender. The record to store a person's information is as follows:

```c++
struct person {
    int identificator;
    string name;
    int age;
    char gender;
};
```

5) **E05-disease-diagnosis**: A medical office diagnoses possible diseases affecting its patients by comparing the information of the symptoms presented by the patient with the information of the symptoms that characterize the already registered diseases. A patient is diagnosed with a disease if their symptoms exactly match those registered for that disease. Considering that the office has characterized M diseases with at most N symptoms each, develop an algorithm that indicates:

    1. The most frequent disease.
    2. The percentage of each disease by gender.

The data will be entered through two files:

- A file `database.in` that contains the already registered diseases.
- A file `patients.in` with the patients' data, where the first line is a number k with the number of patients, and each record includes the name, gender, age, and a number j indicating how many symptoms they present, followed by j lines with the symptoms.

6) **E06-merge-sorted-files**: Write an algorithm that reads integers stored in two files containing sorted integers and generates a third file that contains the same elements from the two files sorted. **Example:** If the first file contains the elements '1' '40' '50' '100' and the second contains the elements '5' '20' '40' '80', the resulting file would have the elements: '1' '5' '20' '40' '40' '50' '80' '100'.
