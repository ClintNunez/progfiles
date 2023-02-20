/*
### GENERAL RULES
    Search description using:
    G_ + Functions 
    main for calling functions

### PARAMETERS
    Search functions using:
    P_ || NamedParameter || DefaultValues || RequiredParameters || Optional Parameters 


*/

/*
TODO 
- search for trailing commas
- search for positional, named, optional positional paramters in dart
*/

void main() {
    // calling a function with named parameters without passing arguments
    NamedParameter();
    // you can specifiy parameters you want to pass arguments to by using paramName: value:
    NamedParameter(is_true: true, is_false: false);
    NamedParameter(is_false: true, is_true: false); // since you can specify, you can jumble up the order of the arguments

    // calling a function with a positional parameters without passing values for the named paramter
    NamedNormalParameter(true, "hello");
    // passing positional arguments and named arguments
    NamedNormalParameter(true, "hello", n: 1); 
    // it seems that you can also reverse the order but positional paramters, arguments should still be in order
    NamedNormalParameter(n: 1, true, "hello"); 
}

// FUNCTIONS are objects in Dart. This means that functions can be assigned to variables or passed as arguments to other functions 

// sample implementation of a function, parameters without any modifier(?) are called positional parameters
bool G_Functions(bool is_true) {
    return is_true == false; 
}

// Effective Dart recommends type annotations for public APIs. However, the function still works even if the type is omitted
OmittedFunctionType(bool is_true) {
    return is_true == false; 
}

// For functions that contain just one expression, you can just use a shorthand syntax;
// the => expression is a shorthand for { return expr; }. => is sometimes referred to as arrow syntax
// only an expression can be used after the => expression. Example, you can't use if statement but you can use a conditional expression ( (condition) ? true : false )
bool isShortHand(bool is_true) => is_true != false;

// Named Parameters are optional
// If you don't provide a value or mark a named parameter as required, their types must me nullable as ther default value will be null
bool NamedParameter({bool? is_true, bool? is_false}) {
    return is_true == is_false;
}

// Function with both positional and named parameters
// it seems that you can only mix both by adding the positional paramter/s before the named parameter
bool NamedNormalParameter(bool? is_true, String word, {int? n}) => false;
