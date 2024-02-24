#ifndef DECISIONTREE_H
#define DECISIONTREE_H

class DecisionTree
{
	private:
		// Low Risk
		double Fever;
		double SoreThroat;
		double Heacdache;
		double RunnyNose;
		double BodyAches;
		double Dirhea;
		double Congestion;
		double Shortness_of_Breath;
		double Chills;
		double Cold;
		double Nausea;
		// High Risk
		double Cough;
		double DifficultyBreathing;
		double LossTaste_Smell;
		double Vomiting;

	public:
		DecisionTree();	// DEFAULT CONSTRUCTOR
		
		void Choice();
};

#endif
