import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    val data = arrayOf( 1, 2, 3, 4, 5, 6, 7, 8)
    var num_to_find: Int

    for(each_element in data) {
        print("$each_element ")
    }

    println()

    print("Enter number to find: ")
    num_to_find = scanner.nextInt()

    val result = Linear_Search(data, num_to_find)

    if(result != -1) {
        println("Number found at index $result")
    } else {
        println("Number not found")
    }
}

// Linear search looks for the data it needs to find by comparing it to each element of the list
// starting from the first element to the last element. If the current element is equal to the data
// it is looking then it is on the list, else it is not on the list
fun Linear_Search(data : Array<Int>, num_to_find : Int) : Int {

    // loops for n number of times, where n is the size of data
    for(i in data.indices) { // n
        // compare the element at index i to num_to_find. If it is equal then return i
        if(data[i] == num_to_find) { // 1
            return i // 1
        }
    }

    return -1 // 1
}
// Computation:
// time complexity = n + 1 + 1 + 1 = n + 3, O(n) Linear time
//                   or n + 1 + 1 = n + 2