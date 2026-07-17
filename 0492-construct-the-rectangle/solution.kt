class Solution {

    fun constructRectangle(area: Int): IntArray {

        var s = Math.sqrt(area.toDouble()).toInt()

        while (area % s != 0) {
            s--
        }

        return intArrayOf(area / s, s)
    }
}