import java.util.Scanner
import kotlin.math.pow
import kotlin.math.sqrt

fun main() {
    var x1 : Double
    var y1 : Double
    var x2 : Double
    var y2 : Double

    val reader = Scanner(System.`in`)

    print("Enter x and y for point 1: ")
    x1 = reader.nextDouble()
    y1 = reader.nextDouble()

    print("Enter x and y for point 2: ")
    x2 = reader.nextDouble()
    y2 = reader.nextDouble()

    var distance = sqrt((x2 - x1).pow(2.0) + (y2 - y1).pow(2.0))

    println("Distance between point1 and point2 is $distance")
}