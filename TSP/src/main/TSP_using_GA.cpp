#include<bits/stdc++.h>

using namespace std;


//declare parameters;
int stt;

int BEST_RESULT = INT_MAX;

int rd = 0;
int cities = 500;
int people = 100;
int generation = 500;
float crossover_rating = 0.9;
float mutation_rating = 0.1;



vector<vector<int>> pp;
vector<vector<float>> distance_matrix;
vector<vector<float>> coordinate(cities, vector<float> (2));


void shuffleVector(vector<int>& vec) {
    unsigned seed = chrono::system_clock::now().time_since_epoch().count() + rd;
    rd += 1;
    shuffle(vec.begin(), vec.end(), default_random_engine(seed));
}

void input(){

    //input number of cities;
    cin >> cities;

    //create distance vector;
    vector<vector<float>> distance(cities, vector<float> (cities));

    //cout << coordinate.size() << endl;
    //resize coordinate matrix for memory saving;
    coordinate.resize(cities);
    //cout << coordinate.size() << endl;

     
    //input coordinate file;
    for(int i = 0; i < cities; i++){
        cin >> stt;
        for(int j = 0; j < 2; j++){
            cin >> coordinate[i][j];
        }
    }

    //get distance matrix;
    for(int i = 0; i < cities; i++){
        for(int j = 0; j < cities; j++){
            distance[i][j] = sqrt(pow((coordinate[i][0] - coordinate[j][0]), 2) + pow(coordinate[j][0] - coordinate[j][1], 2));
        }
    }

    distance_matrix = distance;
}



void createPopulation(){
    for(int i = 0; i < people; i++){
        vector<int> single;
        for(int j = 1; j < cities + 1; j++) single.push_back(j);
        shuffleVector(single);
        pp.push_back(single);
    }
}

void run(){

    createPopulation();


    

    // cout << pp.size() << endl;
    // for(int i = 0; i < pp.size(); i++){
    //     cout << pp[i].size() << " ";
    // }

    // for(int i = 0; i < pp.size(); i++){
    //     for(int j = 0; j < pp[i].size(); j++){
    //         cout << pp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}



int main(){


    freopen("test_data.txt", "r", stdin);

    input();

    
    
    //RESULT;


    cout << "Number of cities: " << cities << endl;
    cout << "Generation: " << generation << endl;
    cout << "Crossover rating: " << crossover_rating << endl;
    cout << "Mutation rating: " << mutation_rating << endl;
    cout << "Size of distance matrix: " << endl;
    cout << "-- Row: " << distance_matrix.size() << endl;
    cout << "-- Column: " << distance_matrix[0].size() << endl;


    run();



    //test_coordinate;
    // for(int i = 0; i < cities; i++){
    //     for(int j = 0; j < 2; j++){
    //         cout << coordinate[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    //test_distance_matrix_file;
    // for(int i = 0; i < distance_matrix.size(); i++){
    //     for(int j = 0; j < distance_matrix[i].size(); j++){
    //         cout << distance_matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    return 0;
}