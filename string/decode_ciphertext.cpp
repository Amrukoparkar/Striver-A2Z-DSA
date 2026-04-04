class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        if (rows == 0) return "";
        
        int n = encodedText.size();
        int cols = n / rows;
        
      
        vector<vector<char>> matrix(rows, vector<char>(cols));
        
        int index = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = encodedText[index++];
            }
        }
       
        string result = "";
        
        for (int startCol = 0; startCol < cols; startCol++) {
            int i = 0, j = startCol;
            
            while (i < rows && j < cols) {
                result += matrix[i][j];
                i++;
                j++;
            }
        }
        
        while (!result.empty() && result.back() == ' ') {
            result.pop_back();
        }
        
        return result;
    }
};
