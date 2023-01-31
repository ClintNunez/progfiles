void printInteger(Object aNumber) {
    print('The number is $aNumber');
}

void printString(Object aString) {
    print('The string is $aString');
}

void main() {
    // Obects can have any types of data as | TODO test for all basic data types
    Object number = 42;
    printInteger(number);
    number = "hello";
    printInteger(number);
    printString(number);
}
