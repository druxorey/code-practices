# Programación Orientada a Objetos

1) **E01-product-classes**: The products sold by a certain company are books and CDs. Each product is characterized by a code that uniquely identifies it, the base market price, and the VAT applied, which is different in each case: 8% for books and 12% for CDs. Additionally, the specific characteristics of each type of product are: for Books: title, author(s), year of publication, publisher, ISBN; and for CDs: title, performer, year of publication. Furthermore, this company applies a 20% discount to books and a 10% discount to CDs. Therefore, the selling price of each product will be calculated as: base price + %VAT – discount. Define the necessary classes to represent the different types of products specified.

2) **E02-hardware-tools**: When visiting a hardware store, it is common to find all kinds of materials and tools. All tools have a set of common characteristics that are of interest not only to the business owner but also to customers, such as: name, a brief description, cost, an associated factory code, the manufacturer's name, etc. In some hardware stores, tools are classified into three main groups: manual, electric, and motorized. Depending on the future use by customers, these types of tools are further classified into: masonry, plumbing, or electrical. Electric tools have as their main characteristic the voltage at which they operate; there are even electric tools that not only work with the current from the electrical grid but can also operate based on energy stored in batteries. Motorized tools operate based on a motor with a certain power, they also have a small fuel tank, and some even require oil. With advanced current technology, tools have been developed that can work based on both electricity and motor energy. These are already available in many hardware stores despite their high cost.

3) **E03-teaching-team**: A department has a teaching team consisting of a head and a group of 1 to 4 assistants. To pass the subject, each student must pass the 3 planned evaluation instances: 1 midterm (which can be retaken), 1 practical work, and a final exam. The department keeps a record of the date and result of each evaluation carried out by the students. In addition to these two data points, for practical work, information regarding any delay in the delivery date (if any) is recorded, and for final exams, the table and the calls in which the student took the exam are recorded.

4) **E04-fm-tuner**: A class is to be defined to control a digital FM tuner; specifically, the goal is to provide the controller with an interface that allows increasing (up) or decreasing (down) the frequency (in steps of 0.5 MHz) and displaying the tuned frequency at any given moment (display). We will assume that the frequency range to be handled oscillates between 80 MHz and 108 MHz and that initially, the controller tunes to 80 MHz. If during an up or down operation one of the two limits is exceeded, the tuned frequency should become that of the opposite end.

5) **E05-fraction-operations**: Write a main algorithm that uses the "fraction" class to store three fractions given by the user (F1, F2, F3) and calculates the sum of F1 + F2 + F3, the multiplication of F1 * F3, the division of F2 by F1, and prints the three results. The "fraction" class should contain the following methods:

    1. **fraction(N1, N2):** Constructor that receives integer values for the numerator (N1) and the denominator (N2).
    2. **add(b):** Adds the fraction b to the fraction that invokes it.
    3. **multiply(b):** Multiplies the fraction b by the fraction that invokes it.
    4. **divide(b):** Divides the fraction b by the fraction that invokes it.
    5. **compare(b):** Returns true if the fraction that invokes it is equal to b, otherwise returns false.
    6. **simplify():** Simplifies the fraction.
    7. **toString():** Returns a string with the invoking fraction expressed in the form N1/N2.

6) **E06-product-class**: Specify a class with the following methods: Constructors, methods to query and modify attributes, and a method to calculate. It should represent products with the following properties:

    • They have a code that uniquely identifies them and is assigned automatically at the time of creation.
    • They store the description and the price without VAT.
    • All products share the same VAT (let's assume 12%), which can vary depending on government decisions.
    • Products are registered on a specific date (the creation date), which helps us know which products are the newest or most recent.

7) **E07-wallet-class**: Define a Wallet class that allows managing the amount of money a person has at a given moment. The class should have a constructor that allows creating a wallet with an initial amount of money and should define a method to add money to the wallet, another to withdraw it, and finally, another to check the available amount; the amount of money in the wallet can only be known through this last method. Of course, it will not be possible to withdraw more money than is available in the wallet at any given time.

8) **E08-runner-class**: Write a Runner class that contains an integer attribute called energy, which indicates the energy value as an integer in the range [0, 100]. When creating a runner, an initial energy value must be specified. It should be verified that the energy value is not outside the range [0, 100] through a procedure called verifyEnergy(). If the amount passed as a parameter is not an integer greater than or equal to zero, verifyEnergy() will display a message about it and set the energy to 0; if the recharged energy exceeds the value of 100, it should be set to 100. The runner will have a method rechargeEnergy() to which the amount to be added to the energy attribute will be passed as a parameter. The class will have a method run() that will subtract 10 energy points from the runner each time it is called. The method energyDepleted() should check if the runner's energy was less than 10 at the time of calling run. If it is less than 10, the energy will be set to 0, a message indicating that the minimum energy has been reached will be displayed, and the runner's energy will be shown. The class will also have a method train that will allow the runner to recover energy. Each time train is called, the runner's energy will increase by 15 points, considering that it can never exceed 100.

9) **E09-point-class**: Define a Point class that will have two attributes of type Real, x and y, which will represent the coordinates of the point within the plane. Define a method that takes another object of the Point class as an argument and calculates the distance between the two points. A point can be located anywhere in the coordinate system. You can define other methods that you consider necessary.

10) **E10-salesperson-class**: A company dedicated to selling juices wants to record information about its salespeople, including: ID, name, salesZone, monthlySales, annualTotal, and commission. Where monthlySales represents the sales made by the salesperson in each of the twelve months of the year, annualTotal represents the sum of sales in a year, and commission is a percentage that depends on the annualTotal. Additionally, the variable name is associated with a Name class whose instances represent the lastName, firstName, and middleName of each salesperson.

    1. Define the Salesperson class and the Name class.
    2. Define in the appropriate class the methods that allow the following requirements:
	
        - Create an instance of the Salesperson class and prompt the user for data to initialize its variables, except for the variables monthlySales, annualTotal, and commission, which are initialized to zero.
        - Enter the sales for a specific month.
        - Determine the salesperson's commission, considering that if annualTotal < Bs 50,000, the commission is zero; if Bs 50,000 ≤ annualTotal < Bs 70,500, the commission is 15%; if Bs 70,500 ≤ annualTotal < Bs 100,000, the commission is 20%; and if Bs 100,000 ≤ annualTotal, the commission is 30%.

11) **E11-mall-stores**: A shopping mall wants to manage all the information about its stores. Each store has: name, RIF, schedule, owner, manager, size (m2), and a list of employees. It is necessary to determine: The number of bookstores in the mall, the number of employees by gender in the pharmacy, the total square meters occupied by the stores in the mall. The stores in the mall are classified into:

    1. Clothing stores, which can be for women, men, or mixed.
    2. Food establishments, which can be restaurants or fast food.
    3. Bookstores.
    4. A Pharmacy.

12) **E12-gambling-system**: A company dedicated to sports betting requires the migration of its old physical ticket system, sold at kiosks, to a fully digital and automated system. This new system will allow customers to manage their registration, payment methods, place bets, and view results and their winnings/losses.
