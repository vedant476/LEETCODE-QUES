class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {

        unordered_map<int, TreeNode*> nodes;
        unordered_set<int> children;

        for (auto &d : descriptions) {
            int parent = d[0];
            int child = d[1];
            int isLeft = d[2];

            if (nodes.find(parent) == nodes.end()) {
                nodes[parent] = new TreeNode(parent);
            }

            if (nodes.find(child) == nodes.end()) {
                nodes[child] = new TreeNode(child);
            }

            if (isLeft) {
                nodes[parent]->left = nodes[child];
            } else {
                nodes[parent]->right = nodes[child];
            }

            children.insert(child);
        }

        for (auto &p : nodes) {
            if (children.find(p.first) == children.end()) {
                return p.second;
            }
        }

        return nullptr;
    }
};