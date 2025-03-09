# Multi-linked Structures

1) **E01-remove-importer**: Information about a set of importing companies is available, ordered by company name and also by permit number (independently). Additionally, for each importer, the articles they trade are known. The information is stored in the following structure:

```cpp
class LISTA_COMP {
    public:
        NODO_COMP *PRIM_COMP;
        NODO_COMP *PRIM_PERM;
};

class NODO_COMP {
    public:
        INFO_COMP I;
        NODO_COMP *SIG_POR_COMP;
        NODO_COMP *SIG_POR_PERM;
        NODO_ART *PRIM_ART;
}; 
class NODO_ART {
    public:
        INFO_ART A;
        NODO_ART *SIG_ART;
};
```

The task is to perform the operation that allows removing a specific importer and their respective articles, considering that the operation has no pre-condition.

2) **E02-sparced-diagonal**: Given a sparse matrix M, using primitives, develop an algorithm that prints the elements of the main diagonal if they are present.

3) **E03-sparced-multiply**: Implement the multiplication of 2 sparse matrices M1 and M2 using primitives. Store the results in a sparse matrix M3.

4) **E04-search-matrix**: Given a sparse matrix M and an integer n, develop an algorithm that searches for n and prints its position if found, otherwise prints "N not found".

5) **E05-document-rounds**: There are n executives sitting at a round table. The head of the table requires that everyone has an important document in their hands, but there is only one. Not all executives have the same retention and therefore cannot remember the details of the document if they do not read it well. It is desired that, given a circular list where each node "i" has an integer k with the retention of the i-th executive, implement a function that allows knowing how many rounds the document must make around the table for all executives to know all the details.

6) **E06-judicial-system**: The Judicial Power has decided to implement a system that allows efficient control of the courts and prisons in the nation. This system must meet the following requirements:

a) Given a court, know all the names of the judges working in it.
b) Know the names of all the judges in the nation. They must be listed in alphabetical order.
c) For each prison, know the ID of the inmates in it (in ascending order).
d) Know which inmate(s) have entered the prison the most times.
e) Given a judge, know the inmates they have sentenced.

Additionally, it is known that:

a) A judge participates in a court and any number of judges can be in a court.
b) Each inmate is in a prison, and several people are confined in each of them.
c) An inmate may have gone through several trials with different judges, and a judge judges several inmates.

The following information is available:

- For judges: Name, ID, court in which they perform their duties, inmates they have sentenced, years in the position.
- For inmates: Name, ID, date of birth, reason for the sentence, years of the sentence, and number of recidivisms.
- For prisons: Name, address, and confined inmates.

Propose a representation that allows efficient solutions to the requirements.

7) **E07-matrix-analysis**: Consider the following implementation of a sparse matrix:

```cpp
class Esparcida {
    NodoCol *columnas;
};

class NodoCol {
    int columna;
    Nodo *primero;
};

class Nodo {
    int fila;
    float info;
    Nodo *proxCol;
};
```

If it is known that the matrices to be stored are 100x100, with a maximum of 200 non-zero elements, analyze the convenience of using the proposed dynamic representation or a static representation for these conditions. When is it advisable to use the static representation?

8) **E08-matrix-representation**: Consider the following definition for sparse matrices:

```cpp
class Nodo {
    int columna;
    float info;
    Nodo *proxFila;
    Nodo *prevFila;
};

class Sparce {
    Nodo** elementos;
};
```

a) Analyze in which situations it is convenient to use this type of representation and in which situations it is convenient to use a static matrix.
b) If it is known that the matrix has 100 rows and 50 columns, and there will be at most 150 non-zero elements in the matrix, which representation is more efficient in terms of memory usage?
c) Based on the previous questions: Under what conditions is it more convenient to use a static two-dimensional array than a dynamic sparse matrix? Justify your answer based on the principles of time complexity and space complexity.

10) **E10-client-services**: The company DigitelUCV classifies its clients into A1, A2, A3, A4 and each client can contract the services they want: "DigitelUCV Basic", "Private Central", "DigiFriend", "Digix", "Private Circuit".

It is desired to store the information so that it is possible to know:

a) How many clients of a given type have contracted a given service? In O(1)
b) Who are those clients? In O(1)

Propose an efficient data structure to satisfy a) and b). Keep in mind that a client can contract more than one service at a time, with different classifications.

11) **E11-sparced-multiplication**: Develop an algorithm that allows multiplying two sparse matrices. The algorithm must be as efficient as possible.

12) **E12-directed-graphs**: Implement the methods FIRST and NEXT for directed graphs represented by: adjacency matrices and adjacency lists.

13) **E13-subject-prerequisites**: Design an algorithm that, given the subject prerequisite scheme of the Computer Science degree and the code of a subject, prints a list of all the subjects that precede the given subject, in chronological order.
