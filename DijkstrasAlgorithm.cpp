#include <iostream>
#include <iomanip>
#include <string>
#define INF 999
using namespace std;
int findMin(int* distance, bool* status, int n)
{
    int min = -1;
    for (int i = 0; i < n; i++)
    {
        if (status[i] == false && (min == -1 || distance[i] < distance[min]))
            min = i;
    }
    return min;
}
void shortestPath(int** edges, int n)
{
    int* distance = new int[n];
    bool* status = new bool[n];
    string* path = new string[n];
    for (int i = 0; i < n; i++)
    {
        path[i] = "0";
    }
    for (int i = 0; i < n; i++)
    {
        distance[i] = INF;
        status[i] = false;
    }
    distance[0] = 0;
    for (int i = 0; i < n; i++)
    {
        int min = findMin(distance, status, n);
        status[min] = true;
        for (int j = 0; j < n; j++)
        {
            if (edges[min][j] != 0 && status[j] != true)
            {
                int dist = distance[min] + edges[min][j];
                if (dist < distance[j])
                {
                    distance[j] = dist;
                    path[j] = path[min] + "->" + to_string(j);
                }

            }
        }
    }
    cout << "Result : \n\n";
    cout << setw(12) << "Source" << setw(12) << "Destination" << setw(18) << "Path" << setw(12) << "Cost" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << setw(12) << "0" << setw(12) << i << setw(18) << path[i] << setw(12) << distance[i] << endl;
    }

    delete[] path;
    delete[] distance;
    delete[] status;
}
int main()
{
    int n;   //number of vertices
    cout << "Enter the number of Vertices : ";
    cin >> n;
    int** edges = new int* [n];
    for (int i = 0; i < n; i++)
    {
        edges[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            edges[i][j] = 0;
        }
    }
    cout << "Enter the cost matrix : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> edges[i][j];
        }
    }
    cout << "The entered cost matrix is " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << edges[i][j] << "\t";
        }
        cout << "\n";
    }
    shortestPath(edges, n);

    for (int i = 0; i < n; i++)
    {
        delete[] edges[i];
    }
    delete[] edges;
}