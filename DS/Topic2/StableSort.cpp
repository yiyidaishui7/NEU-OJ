#include <iostream>
#include <vector>
using namespace std;
struct Card
{
    char color;
    int value;
    Card(char c, int v) : color(c), value(v) {}
};
void BubbleSort(vector<Card> &C)//插入和冒泡一定是稳定的
{
    for (int i = 0; i < C.size(); i++)
    {
        for (int j = C.size()-1; j > i; j--)
        {
            if (C[j].value < C[j - 1].value)
            {
                swap(C[j], C[j - 1]);
            }
        }
    }
}
void SelectionSort(vector<Card> &C)
{
    for (int i = 0; i < C.size(); i++)
    {
        int mini = i;
        for (int j = i; j < C.size(); j++)
        {
            if (C[j].value < C[mini].value)
            {
                mini = j;
            }
        }
        swap(C[i], C[mini]);
    }
}
bool isStable(int N,vector<Card> & C1,vector<Card>& C2)
{
    for(int i = 0;i<N;i++){
        if(C1[i].color!=C2[i].color||C1[i].value!=C2[i].value){
            return false;
        }
    }
    return true;
}
int main()
{
    int N = 0;
    cin >> N;
    vector<Card> cards;
    cards.reserve(N);
    for (int i = 0; i < N; i++)
    {
        char color;
        int value;
        cin >> color >> value;
        cards.push_back(Card(color,value));
    }

    vector<Card> bubble_sorted =cards;
    BubbleSort(bubble_sorted);
    for(Card& card : bubble_sorted){
        cout<<card.color<<card.value<<" ";
    }
    cout<<endl;
    cout<<"Stable"<<endl;//冒泡是稳定排序

    vector<Card> selection_sorted =cards;
    SelectionSort(selection_sorted);
    for(Card& card : selection_sorted){
        cout<<card.color<<card.value<<" ";
    }
    cout<<endl;
    cout<<(isStable(N,bubble_sorted,selection_sorted)?"Stable":"Not stable");
    
    return 0;
}