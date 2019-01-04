#ifndef __EVOLVE_FIELD__
#define __EVOLVE_FIELD__

#include<vector>

void update(std::vector<int>& field, double b);
void fake_evolve(std::vector<int>& field, double b, int num_steps);
void evolve_field(std::vector<int>& field, double b, int num_steps);

#endif
