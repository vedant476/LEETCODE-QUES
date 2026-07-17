class Solution {

    func constructRectangle(_ area: Int) -> [Int] {

        var s = Int(Double(area).squareRoot())

        while area % s != 0 {
            s -= 1
        }

        return [area / s, s]
    }
}