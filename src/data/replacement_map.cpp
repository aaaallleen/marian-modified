#include "data/replacement_map.h"

replacementMap::replacementMap(){
  tokens = {
      "<name0>", "<name1>", "<name2>", "<name3>", "<name4>", "<name5>", "<name6>", "<name7>", "<name8>", "<name9>"};
  for (size_t i = 0; i < tokens.size(); ++i) {
    Map[tokens[i]] = tokens[i];
  }
}
void replacementMap::shuffle_and_update(){
  std::vector<int> nameIndices = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  // Seed with a real random value, if available
  std::random_device rd;
  std::mt19937 gen(rd());
  std::shuffle(nameIndices.begin(), nameIndices.end(), gen);

  std::unordered_map<std::string, std::string> replacementMap;
  for (size_t i = 0; i < tokens.size(); ++i) {
    Map[tokens[i]] = tokens[nameIndices[i]];
  }

}
void replacementMap::reset_map(){
  for (size_t i = 0; i < tokens.size(); ++i) {
    Map[tokens[i]] = tokens[i];
  }

}
