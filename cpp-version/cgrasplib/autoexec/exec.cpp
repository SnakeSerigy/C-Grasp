#include "../cgrasp.h"
#include "autc.h"

int main(){

	Vld X;

	if(maximize == 0){
		X = CGrasp(func, Lower_limits, Upper_limits,
			alfa, h_inf, h_sup, max_iterations,
			max_iterations_without_improvement,
			objective, delta_linear_search,
			points_to_examine);
	}
	else{
		if(objective == default_objective){
			objective = default_objective_maximize;
		}
		X = CGrasp_Max(func, Lower_limits, Upper_limits,
			alfa, h_inf, h_sup, max_iterations,
			max_iterations_without_improvement,
			objective, delta_linear_search,
			points_to_examine);
	}

	Sol_print(X, func);

	return 0;
}
