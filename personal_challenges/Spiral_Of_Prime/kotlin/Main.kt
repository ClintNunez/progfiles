import java.util.*


fun main() {
    val scanner = Scanner(System.`in`)

    print("Enter dimension: ")
    val dimension = scanner.nextInt()

    print_spiral(dimension)
}


fun print_spiral(
    dimension : Int
) {
    var array_of_primes = create_array_of_primes(dimension)

    val final_dimension = dimension * 3
    var matrix = Array(final_dimension) {CharArray(final_dimension) {' '} }

    matrix = create_spiral(dimension, final_dimension, array_of_primes, matrix)

    for(row in matrix) {
        for(column in row) {
            print(column)
        }
        println()
    }
}
fun create_array_of_primes(
    dimension : Int
) : BooleanArray {
    var array_of_primes = BooleanArray(dimension * dimension + 1) {true}
    val limit = dimension * dimension

    for(p in 2..limit) {
        if(array_of_primes[p]) {
            for(i in p*p..limit step p) {
                array_of_primes[i] = false
            }
        }
    }
    return array_of_primes
}
fun create_spiral(
    dimension : Int,
    final_dimension: Int,
    array_of_primes : BooleanArray,
    matrix : Array<CharArray>
) : Array<CharArray> {
    val PATH_LEFT = '<'; val PATH_RIGHT = '>'; val PATH_UP = '^'; val PATH_DOWN = 'v' // paths
    val NOT_PRIME = 'o'; val PRIME = '@' // prime characters
    val overall_cells = dimension * dimension // num. of cells using the original dimension
    var x = 0; var y = 0 // starting index
    var direction = 0 // 0 - right, 1 - up, 2 - left, 3 - down
    var step = 0 // step counter
    var max_steps = 1 // limit of step
    var max_step_reached = 0 // num. of times step reached max_steps

    // find starting index in the matrix
    if(dimension % 2 == 0) {
        x += final_dimension / 2 - 3
        y += final_dimension / 2
    } else {
        x += final_dimension / 2
        y += final_dimension / 2
    }

    for(i in 1..overall_cells) {
        if(i == 1) {
            matrix[y][x] = NOT_PRIME
            x++
            matrix[y][x] = PATH_RIGHT
            x++
        } else if(i == overall_cells) {
            when(direction) {
                0 -> {
                    matrix[y][x] = PATH_RIGHT
                    x++
                }
                1 -> {
                    matrix[y][x] = PATH_UP
                    y--
                }
                2 -> {
                    matrix[y][x] = PATH_LEFT
                    x--
                }
                3 -> {
                    matrix[y][x] = PATH_DOWN
                    y++
                }
            }

            matrix[y][x] = if(array_of_primes[i]) PRIME else NOT_PRIME
        } else {
            for(j in 0..2) {
                if(j == 1) {
                    matrix[y][x] = if(array_of_primes[i]) PRIME else NOT_PRIME

                    step++
                    if(step == max_steps) {
                        step = 0
                        max_step_reached++
                        direction = if(direction == 3) 0 else direction + 1
                    }

                    if(max_steps != dimension - 1) {
                        if(max_step_reached == 2) {
                            max_step_reached = 0
                            max_steps++
                        }
                    }

                    when(direction) {
                        0 -> x++
                        1 -> y--
                        2 -> x--
                        3 -> y++
                    }
                } else {
                    when(direction) {
                        0 -> {
                            matrix[y][x] = PATH_RIGHT
                            x++
                        }
                        1 -> {
                            matrix[y][x] = PATH_UP
                            y--
                        }
                        2 -> {
                            matrix[y][x] = PATH_LEFT
                            x--
                        }
                        3 -> {
                            matrix[y][x] = PATH_DOWN
                            y++
                        }
                    }
                }
            }
        }
    }

    return matrix
}
