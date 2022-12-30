import java.util.Scanner
import kotlin.math.sqrt
import kotlin.math.pow

fun main(args: Array<String>) {
    var lat1 : Double
    var long1 : Double
    var lat2 : Double
    var long2 : Double

    val reader = Scanner(System.`in`)

    println("Enter lat and long for location 1: ")
    lat1 = reader.nextDouble()
    long1 = reader.nextDouble()

    println("Enter lat and long for location 1: ")
    lat2 = reader.nextDouble()
    long2 = reader.nextDouble()

    var distance = sqrt((lat2 - lat1).pow(2.0) + (long2 - long1).pow(2.0))

    println("Distance between location 1 and 2 is $distance")
}