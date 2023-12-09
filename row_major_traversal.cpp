/*The row-major order is the simplest and most intuitive order
 for storing multi-dimensional arrays. 
 It is one of the ways by which we can serialize/deserialize 
 a multi-dimensional array to and from a single-dimensional/linear sequence.
 Multi-dimension arrays in programming languages like C, C++, 
 Objective C, etc are stored in the row-major order. 
 In row-major order, consecutive data items in a row 
 of an array are placed consecutively to each other in the memory.*/

 /*Given an NxM matrix, write a function to perform a row-major traversal 
  on this matrix and return the traversed path.*/

    #include <iostream>
    #include <vector>
    using namespace std;

    class Solution 
    {
    public:
        vector<int> rowMajorTraversal(const vector<vector<int>> &matrix) 
        {
            if(matrix.empty())
            {
                return vector<int>();
            }
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<int> path;

        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<cols; j++)
            {
                path.push_back(matrix[i][j]);
            }
        }
        return path;
        }
    };
    int main()
{
    Solution solution;

    cout << "Enter the number of rows and columns of the matrix: ";
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> userMatrix(rows, vector<int>(cols));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> userMatrix[i][j];
        }
    }

    vector<int> result = solution.rowMajorTraversal(userMatrix);

    cout << "Row-Major Traversal Result: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}