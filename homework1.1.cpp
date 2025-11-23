#include <iostream>

int main() {
    int N;
    std::cin >> N;

    const int rows = 25;
    const int columns = 80;

    int maxWidth = 3 * N;             
    int totalRows = 2 * N - 1;        

    int left = (columns - maxWidth) / 2;          
    int right = columns - left - maxWidth;        
    int top = (rows - totalRows) / 2;           
    int bottom = rows - totalRows - top;         

    
    for (int i = 0; i < top; i++) {
        for (int j = 0; j < columns; j++) std::cout << ' ';
        std::cout << "\n";
    }

    
    for (int row = 1; row <= totalRows; row++) {
        int num = (row <= N) ? row : (2 * N - row); 

        
        for (int i = 0; i < left; i++) std::cout << ' ';

        
        for (int i = 1; i <= num; i++) std::cout << i;

        
        if (num == N) {
            
            for (int i = 0; i < N; i++) std::cout << '-';
        }
        else {

            int middle = maxWidth - 2 * num;
            for (int i = 0; i < middle; i++) 
                std::cout << ' ';
        }

        
        for (int i = num; i >= 1; i--) 
            std::cout << i;

       
        for (int i = 0; i < right; i++) 
            std::cout << ' ';

        std::cout << "\n";
    }

    
    for (int i = 0; i < bottom; i++) {
        for (int j = 0; j < columns; j++) 
            std::cout << ' ';
        std::cout << "\n";
    }

 
}
