#include <stdlib.h>

struct Item
{
    int value;
    int weight;
};

int comp(const void *a, const void *b)
{
    struct Item *itemA = (struct Item *)a;
    struct Item *itemB = (struct Item *)b;

    double r1 = (double)itemA->value / (double)itemA->weight;
    double r2 = (double)itemB->value / (double)itemB->weight;

    if (r1 > r2)
        return -1; // itemA has higher ratio, so it comes first
    else if (r1 < r2)
        return 1;
    else
        return 0;
}

double fractionalKnapsack(int *val, int *wt, int n, int capacity)
{

    struct Item arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i].value = val[i];
        arr[i].weight = wt[i];
    }

    // 2. Sort using qsort
    qsort(arr, n, sizeof(struct Item), comp);

    int curWeight = 0;
    double finalValue = 0.0;

    // 3. Fill Knapsack
    for (int i = 0; i < n; i++)
    {
        if (curWeight + arr[i].weight <= capacity)
        {
            curWeight += arr[i].weight;
            finalValue += arr[i].value;
        }
        else
        {
            int remain = capacity - curWeight;
            finalValue += (arr[i].value / (double)arr[i].weight) * (double)remain;
            break;
        }
    }

    return finalValue;
}