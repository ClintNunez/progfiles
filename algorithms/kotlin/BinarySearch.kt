import java.util.Scanner

fun main() {
    val data = arrayOf( 1, 2, 3, 4, 5, 6, 7, 8)
    val scanner = Scanner(System.`in`)
    var num_to_find : Int

    for(each_element in data) {
        print("$each_element ")
    }

    println()

    print("Enter number to find: ")
    num_to_find = scanner.nextInt()

    val result = BinarySearch(data, num_to_find)

    if(result != -1) {
        println("Number found at index $result")
    } else {
        println("Number not found")
    }
}

// Binary search divides the list of elements until it finds the data that it is looking for
// Meaning that each iteration, the size of the list gets smaller and smaller until there is only one element
// on the list. If the remaining element is equal to the data being searched then it is on the list, else it
// is not on the list.
fun BinarySearch(data : Array<Int>, num_to_find : Int) : Int {
    var first = 0 // 1
    var last = data.size - 1 // 1
    var midpoint : Int // 1

    while(first <= last) { // log sub 2 n
        // find the midpoint of the array
        midpoint = (first + last) / 2 // 1

        if(data[midpoint] == num_to_find) { // 1
            // if the element is equal to num_to_find, returns midpoint
            return midpoint // 1
        } else if(data[midpoint] < num_to_find) {
            // moves the position of first to midpoint + 1 which removes the
            // current element and all the elements to its left
            first = midpoint + 1 // 1
        } else {
            // moves the position of last to midpoint - 1 which removes the
            // current element and all the elements to its right
            last = midpoint - 1 // 1
        }
    }

    return -1 // 1
}
// Computation:
// time complexity = 1 + 1 + 1 + log sub 2 n + 1 + 1 + 1 + 1 + 1 = log sub 2 n + 8, O(log n) Logarithmic time