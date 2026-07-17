import "math"

func constructRectangle(area int) []int {

    s := int(math.Sqrt(float64(area)))

    for area%s != 0 {
        s--
    }

    return []int{area / s, s}
}