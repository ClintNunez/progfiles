/*
### TYPES
    Search functions using:
    /T_ + Number || Strings || Booleans || Lists || Sets || Maps || Runes || Symbols
    

*/

void main() {
    
}

void T_Numbers() {
    var x = 1;  // int x = 1;
    var hex = 0x32; // int hex = 0x32;

    var y = 1.1; // double y = 1.1;
    var exponent = 1.1e5; // double expnonet = 1.1e5;

    double z = 1; // Equivalent to double z = 1.0; "Integer literals are automatically converted to doubles when necessary"

    // variables declared as num can have both integer and double values
    num a = 1; 
    a += 1.1e5;

    // String <-> Numbers conversion
    // String -> int
    int one = int.parse('1');

    // String -> double
    double onePointone = double.parse('1.1');

    // int -> String
    String oneAsString = 1.toString();

    // double -> String
    String onePointoneAsString = 1.1.toString(); 

    // double -> String using String AsFixed - fixed number of decimal places
    String onePointoneAsStringFixed = 1.1.toStringAsFixed(3); // onePointoneAsString = 1.100 
    
    // double,int -> String using String AsPrecision - only the significant digits
    String oneToSevenAsStringPrecision = 1234567.toStringAsPrecision(9); // onePointoneAsString = 1234567.00 

    // bitwise and shift operations also exist 
    // https://dart.dev/guides/language/language-tour#bitwise-and-shift-operators

    // for removing hints TODO print this
    x;hex;y;exponent;z;a;one;onePointone;oneAsString;onePointoneAsString;onePointoneAsStringFixed;oneToSevenAsStringPrecision;
} 

void T_Strings() {
    // A Dart string (String object) holds a sequence of UTF-16 code units. You can use either single or double quotes to create a string
    String s1 = 'String';
    String s2 = "String";
    String s3 = 'It\'s needed';
    String s4 = "It's not needed";

}


