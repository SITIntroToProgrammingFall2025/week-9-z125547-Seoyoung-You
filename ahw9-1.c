#include <stdio.h>
#include <float.h>
#include <math.h>

int main() {
    const int COLORS[5][3] = {
        {0, 0, 0},   
        {255, 0, 0}, 
        {0, 255, 0},   
        {0, 0, 255},
        {255, 255, 255} 
    };
    
    const char *COLOR_NAMES[] = {
        "Black", 
        "Red", 
        "Green", 
        "Blue", 
        "White"
    };

    int input_r, input_g, input_b;
    float min_distance_sq = FLT_MAX;
    int nearest_index = -1;
    
    if (scanf("%d %d %d", &input_r, &input_g, &input_b) != 3) {
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        int r = COLORS[i][0];
        int g = COLORS[i][1];
        int b = COLORS[i][2];

        float dr = (float)(input_r - r);
        float dg = (float)(input_g - g);
        float db = (float)(input_b - b);
        
        float distance_sq = dr * dr + dg * dg + db * db;

        if (distance_sq < min_distance_sq) {
            min_distance_sq = distance_sq;
            nearest_index = i;
        }
    }

    if (nearest_index != -1) {
        printf("The nearest color is %s\n", COLOR_NAMES[nearest_index]);
    } else {
        printf("Error: Could not find nearest color.\n");
    }

    return 0;
}

