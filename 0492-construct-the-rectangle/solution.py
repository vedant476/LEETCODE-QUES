class Solution:

    def constructRectangle(self, area: int):

        s = int(area ** 0.5)

        while area % s != 0:
            s -= 1

        return [area // s, s]