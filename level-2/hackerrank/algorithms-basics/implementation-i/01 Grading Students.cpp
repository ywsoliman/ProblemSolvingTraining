vector<int> gradingStudents(vector<int> grades) {
    vector<int> res;
    for (int grade : grades) {
        if (grade < 38 || 5 - grade % 5 >= 3)
            res.push_back(grade);
        else
            res.push_back(grade + (5 - grade % 5));
    }
    return res;
}