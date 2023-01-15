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

fun Linear_Search(data : Array<Int>, num_to_find : Int) : Int {

    // loops for n number of times, where n is the size of data
    // and compares each element of data to num_to_find.
    // if the current element is equal then return the current index
    // else return -1 in this case
    for(i in data.indices) { // n
        if(data[i] == num_to_find) { // 1
            return i // 1
        }
    }

    return -1 // 1
}
// Computation:
// time complexity = n + 1 + 1 + 1 = n + 3, O(n) Linear time
//                   or n + 1 + 1 = n + 2