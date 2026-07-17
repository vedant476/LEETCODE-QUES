public class Solution {

    public int[] ConstructRectangle(int area) {

        int s = (int)Math.Sqrt(area);

        while (area % s != 0) {
            s--;
        }

        return new int[] { area / s, s };
    }
}