class Solution {

    public int[] constructRectangle(int area) {

        int s = (int)Math.sqrt(area);

        while (area % s != 0) {
            s--;
        }

        return new int[]{area / s, s};
    }
}