/*
### GENERAL RULES
    G_ + Variables || Arithmetic

### TYPES
    Search functions using:
    T_ || Number || Strings || Booleans || Lists || Sets || Maps || Runes || Symbols


*/

void main() {
    T_List();
}

void G_Variables() {
    // variables declared without an explicit type and is not initialized can get multiple data types (wat)
    var test;
    print('test = not initialized');
    test = 1;
    print('test = $test');
    test = 1.1;
    print('test = $test');
    test = false;
    print('test = $test');
    test = "string";
    print('test = $test');

    // difference between const and final
    // https://stackoverflow.com/questions/50431055/what-is-the-difference-between-the-const-and-final-keywords-in-dart
}

void G_Arithmetic() {
    var notAnuumber = 0 / 0; // valid?
}

void T_Numbers() {
    var x = 1;  // int x = 1;
    var hex = 0x32; // int hex = 0x32;

    var y = 1.1; // double y = 1.1;
    var exponent = 1.1e5; // double exponent = 1.1e5;

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

    print("s1 with single quote: $s1, s2 with double quote: $s2, s3 adding single quote in a single quote initialization: $s3, s4 adding single quote in a single quote initialization: $s4");

    // string interpolation
    print("print s1 using interpolation = $s1"); // interpolating an identifier
    print("print upper case of s1 using interpolation = ${s1.toUpperCase()}"); // interpolating an expression

    // concatenate string using adjacent string literals or + operator
    var s5 = 'String '
    'concatenation'
    " works even over line breaks.";

    print("print s5 concatenated using adjacent strings: $s5");

    var s6 = 'The + operator ' + "works, as well.";
     
    print("print s6 concatenated using + operator: $s6");
    
    // mult-line string using a triple quote with either single or double quotation marks.
    var s7 = '''
Multi-line
using 
single
quotes
    ''';

    print("print s7 multi-line with single quotes: $s7");

    var s8 = """
Multi-line
using 
double
quotes
    """;

    print("print s8 multi-line with double quotes: $s8");

    // literal strings are compile-time constants, as long as any interpolated expression is a compile-time
    // constants that evaluates to null or a numeric, string or boolean value.

    const aConstNum = 0;
    const aConstBool = false;
    const aConstString = "const string";

    var aNum = 0;
    var aBool = true;
    var aString = 'a string';
    const aConstList = [1, 2, 3]; // does not work even if the type of the elements are valid.

    // a constant string can only interpolate variables that are also constant
    const validString = '$aConstNum, $aConstBool, $aConstString';
    //const invalidString = '$aNum, $aBool, $aString, $aConstList'; // invalid
}

void T_Boolean() {
    // true or false but cannot accept 0 or 1 like c++

    // Dart’s type safety means that you can’t use code like if (nonbooleanValue) or assert (nonbooleanValue). Instead, explicitly check for values, like this:
    // Check for an empty string.
    var fullName = '';
    assert(fullName.isEmpty);

    // Check for zero.
    var hitPoints = 0;
    assert(hitPoints <= 0);

    // Check for null.
    var unicorn;
    assert(unicorn == null);

    // Check for NaN.
    var iMeantToDoThis = 0 / 0;
    assert(iMeantToDoThis.isNaN);
}

void T_List() {
    // List is the same as Arrays in other languages

    var list = [1, 2, 3];

    // compile-time constant list
    var constList = const [1, 2, 3];

    var initListUsingSpread = [0, ...list];

    // null-aware spread operator (...?) avoids exceptions when the content of a list might be nulla
    var initListUsingNullSpread = [0, ...?list];

    // collection if can be used to create a list with n or n + 1 elements where n is the number of elements (I don't know the use case of this)
    var promoActive = true;
    var nav = ['Home', 'Furniture', 'Plants', if (promoActive) 'Outlet', 'Extra', 'hello'];
        
    // collection for can be used to create a list. this example creates a string list using an int list
    var listOfInts = [1, 2, 3];
    var listOfStrings = ['#0', for (var i in listOfInts) '#$i'];

    // useful methods
    
    // fold - sums a collection to a single value, fold(initialValue, (previousValue, element) => null)     
    int sum = 0;
    int result = list.fold(sum, (previousValue, element) => previousValue + element);
    print(result); // 1 + 2 + 3 = 6

    // insert - insert an element at given index 
    list.insert(0, 4); // list = [4, 1, 2, 3];
    print(list);
}

void T_Sets() {
    // set in dart is an unordered collection of unique items
    
    var fruits = {'apple', 'banana', 'orange'};

    // To create an empty set, use {} preceded by a type argument, or assign {} to a variable of type Set:
    var emptySet1 = <String>{};
    Set<String> emptySet2 = {};
    // var mapNotSet = {}; Creates a map not a set.

    // add elements to an existing set using add() or addAll();
    emptySet1.add('New');
    emptySet2.addAll(fruits);
    
    // compile-time constant set
    Set<String> constantSet = const {
        'I',
        'Am',
        'A',
        'Constant', 
        'Set.',
    };
}

void T_Maps() {
    // keys and values
    // both keys and values can be any type of object
    // each key can only occur once but same values is allowed

    var gifts = {
        'first' : 'partridge',
        'second' : 'turtledoves',
        'third' : 'golden rings',
        //'third' : 'box' // shows a warning
    };
    
    // making a map object using a map constructor
    var nobleGases = Map<int, String>();
    // [<key>] not an index
    nobleGases[2] = 'helium';
    nobleGases[10] = 'neon';
    nobleGases[18] = 'argon';

    // retrieve a value from a key using [<key>]
    print(nobleGases[2]);

    if(nobleGases[3] == null) {
        print("3 does not exist");
    }
    
    // compile-time constant map
    final constantMap = const {
        'first' : 'partridge',
        'second' : 'turtledoves',
        'third' : 'golden rings',
    };
}
