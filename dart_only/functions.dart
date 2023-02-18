/*
### GENERAL RULES
    G_ + Functions

### PARAMETERS
    Search functions using:
    P_ || NamedParameter || DefaultValues || RequiredParameters || Optional Parameters 


*/

void main() {

}

// Functions are objects in Dart. This means that functions can be assigned to variables or passed as arguments to other functions 

// sample implementation of a function
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


