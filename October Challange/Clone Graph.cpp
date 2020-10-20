/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:

Node* helper(Node* node,unordered_map<Node*,Node*> &mp)
{
    if(node==NULL)
    {
        return NULL;
    }
    
    Node* clone = new Node(node->val);
    
    mp[node]=clone;
    
    for(auto n : node->neighbors)
    {
        if(!mp.count(n))
        {
            Node* y = helper(n,mp);
            (clone->neighbors).push_back(y);
        }
        else
        {
            (clone->neighbors).push_back(mp[n]);
        }
    }
    
    return clone;
    
}

Node* cloneGraph(Node* node) {
    
    unordered_map<Node* , Node*> mp;
    
    return helper(node,mp);
    
}
};