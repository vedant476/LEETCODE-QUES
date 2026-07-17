class Solution {
public:

    int ret(int n, std::vector<int> &visited)
    {
        if (n < 1) return 0;
        if (n == 1) return 1;

        if (visited[n] != -1) return visited[n];

        int result = ret(n-1,visited) + ret(n-2,visited);

        visited[n] = result;

        return result;
    }

    int fib(int n)
    {
        if (n < 1)
        {
            return 0;
        }
        if (n < 3) 
        {
            return 1;
        }
        std::vector<int> visited(32,-1);

        return ret(n,visited);
    }
};