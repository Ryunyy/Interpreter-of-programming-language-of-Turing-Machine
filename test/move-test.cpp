 int point (int point, vector<action> &rules, int i)
{
  if (rules[i].move == "r")
		point++;
	if (rules[i].move == "l")
		point--;
	if (rules[i].move == "n")
		point = point;
	return point;
}

    TEST_CASE("test MOVE", "[TEST]"){
  std::vector <action> rules;
  rules.resize(1);
  rules[0].state = "q1"; rules[0].exp_symbol = "1"; rules[0].new_symb = "0"; rules[0].move = "r"; rules[0].next_state = "halt";
  REQUIRE(point(1, rules, 0) == 2);
  cout << "test [move 1] successful" << endl;
  rules[0].state = "q1"; rules[0].exp_symbol = "1"; rules[0].new_symb = "0"; rules[0].move = "r"; rules[0].next_state = "halt";
  REQUIRE(point(2, rules, 0) == 3);
  cout << "test [move 2] successful" << endl;
  rules[0].state = "q1"; rules[0].exp_symbol = "1"; rules[0].new_symb = "0"; rules[0].move = "r"; rules[0].next_state = "halt";
  REQUIRE(point(3, rules, 0) == 4);
  cout << "test [move 3] successful" << endl;
  rules[0].state = "q1"; rules[0].exp_symbol = "1"; rules[0].new_symb = "0"; rules[0].move = "r"; rules[0].next_state = "halt";
  REQUIRE(point(5, rules, 0) == 6);
  cout << "test [move 4] successful" << endl;
  rules[0].state = "q1"; rules[0].exp_symbol = "1"; rules[0].new_symb = "0"; rules[0].move = "r"; rules[0].next_state = "halt";
  REQUIRE(point(6, rules, 0) == 7);
  cout << "test [move 5] successful" << endl;
  rules[0].state = "q1"; rules[0].exp_symbol = "1"; rules[0].new_symb = "0"; rules[0].move = "r"; rules[0].next_state = "halt";
  REQUIRE(point(7, rules, 0) == 8);
  cout << "test [move 6] successful" << endl;
  rules[0].state = "q1"; rules[0].exp_symbol = "1"; rules[0].new_symb = "0"; rules[0].move = "r"; rules[0].next_state = "halt";
  REQUIRE(point(8, rules, 0) == 9);
  cout << "test [move 7] successful" << endl;
  rules[0].state = "q1"; rules[0].exp_symbol = "1"; rules[0].new_symb = "0"; rules[0].move = "r"; rules[0].next_state = "halt";
  REQUIRE(point(9, rules, 0) == 10);
  cout << "test [move 8] successful" << endl;
  rules[0].state = "q1"; rules[0].exp_symbol = "1"; rules[0].new_symb = "0"; rules[0].move = "n"; rules[0].next_state = "halt";
  REQUIRE(point(10, rules, 0) == 10);
  cout << "test [move 9] successful" << endl;
  rules[0].state = "q1"; rules[0].exp_symbol = "1"; rules[0].new_symb = "0"; rules[0].move = "l"; rules[0].next_state = "halt";
  REQUIRE(point(10, rules, 0) == 9);
  cout << "test [move 10] successful" << endl;
  rules[0].state = "q1"; rules[0].exp_symbol = "1"; rules[0].new_symb = "0"; rules[0].move = "l"; rules[0].next_state = "halt";
  REQUIRE(point(9, rules, 0) == 8);
  cout << "test [move 11] successful" << endl;
  rules[0].state = "q1"; rules[0].exp_symbol = "1"; rules[0].new_symb = "0"; rules[0].move = "l"; rules[0].next_state = "halt";
  REQUIRE(point(8, rules, 0) == 7);
  cout << "test [move 12] successful" << endl;
  rules[0].state = "q1"; rules[0].exp_symbol = "1"; rules[0].new_symb = "0"; rules[0].move = "l"; rules[0].next_state = "halt";
  REQUIRE(point(7, rules, 0) == 6);
  cout << "test [move 13] successful" << endl;
  rules[0].state = "q1"; rules[0].exp_symbol = "1"; rules[0].new_symb = "0"; rules[0].move = "l"; rules[0].next_state = "halt";
  REQUIRE(point(6, rules, 0) == 5);
  cout << "test [move 14] successful" << endl;
  rules[0].state = "q1"; rules[0].exp_symbol = "1"; rules[0].new_symb = "0"; rules[0].move = "l"; rules[0].next_state = "halt";
  REQUIRE(point(5, rules, 0) == 4);
  cout << "test [move 15] successful" << endl;
  rules[0].state = "q1"; rules[0].exp_symbol = "1"; rules[0].new_symb = "0"; rules[0].move = "l"; rules[0].next_state = "halt";
  REQUIRE(point(4, rules, 0) == 3);
  cout << "test [move 16] successful" << endl;
  rules[0].state = "q1"; rules[0].exp_symbol = "1"; rules[0].new_symb = "0"; rules[0].move = "l"; rules[0].next_state = "halt";
  REQUIRE(point(3, rules, 0) == 2);
  cout << "test [move 17] successful" << endl;
  rules[0].state = "q1"; rules[0].exp_symbol = "1"; rules[0].new_symb = "0"; rules[0].move = "l"; rules[0].next_state = "halt";
  REQUIRE(point(2, rules, 0) == 1);
  cout << "test [move 18] successful" << endl;
  rules[0].state = "q1"; rules[0].exp_symbol = "1"; rules[0].new_symb = "0"; rules[0].move = "l"; rules[0].next_state = "halt";
  REQUIRE(point(1, rules, 0) == 0);
  cout << "test [move 19] successful" << endl;
  rules[0].state = "q1"; rules[0].exp_symbol = "1"; rules[0].new_symb = "0"; rules[0].move = "r"; rules[0].next_state = "halt";
  REQUIRE(point(1001, rules, 0) == 1002);
  cout << "test [move 20] successful" << endl;
  rules[0].state = "q1"; rules[0].exp_symbol = "1"; rules[0].new_symb = "0"; rules[0].move = "l"; rules[0].next_state = "halt";
  REQUIRE(point(10000, rules, 0) == 999);
  cout << "test [move 21] successful" << endl;
  rules[0].state = "q1"; rules[0].exp_symbol = "1"; rules[0].new_symb = "0"; rules[0].move = "n"; rules[0].next_state = "halt";
  REQUIRE(point(214, rules, 0) == 214);
  cout << "test [move 22] successful" << endl;
  cout << endl <<"TEST PRINTSTRING.cpp is done" << endl;
} 