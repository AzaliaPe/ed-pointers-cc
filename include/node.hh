struct Node
{
    int value{};
    Node* nextNode;
    Node(int value, Node*NextNode)
    {
        this->value = value;
        this->nextNode = nextNode;
    }
};