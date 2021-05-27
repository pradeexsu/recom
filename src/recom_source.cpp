// recom (REmoves COMments of Rscript)
// Copyright (c) 2021 Pradeep Suthar


#include <Rcpp.h>
#include <string>
#include <fstream>

void extract(std::string & line, int & index, std::string & new_line, char over);
std::string filter_line(std::string line);
bool is_space_line(std::string & line);

//' recom refers to REmove COMments of Rscript file
//' @param input_file input source Rscript file
//' @param output_file output Rscript file
//' @param remove_space is an optional boolean flag to remove free space of comments
//  @export recom is function to remove comments
// [[Rcpp::export]]
void recom(Rcpp::String input_file, Rcpp::String output_file, Rcpp::LogicalVector remove_space = true) {
  
  std::ifstream Rinput(input_file);
  if(not Rinput.good()){
    std::string error_msg = "input file \"" + std::string(input_file) + 
      "\" does not exist, please enter valid input file path.";
    Rinput.close();
    Rcpp::stop(error_msg);
    return;
  }
  std::ofstream Routput(output_file);
  
  std::string line;
  bool is_last_char_new_line = false;
  while (getline(Rinput, line)) {
    line = filter_line(line);
    if (remove_space and is_space_line(line))
      line = "";
    else
      line += "\n";
    for (const char c: line) {
      Routput.put(c);
    }
  }
  Rinput.close();
  Routput.close();
}

// function for detecting empty lines
// return true if there is no char such other then space, tab, newline.
bool is_space_line(std::string & line) {
  for (const char c: line) {
    if (c == ' ' || c == '\t' || c == '\n')
      continue;
    else
      return false;
  }
  return true;
}

// track valid string between single quotes (' ') or double quotes (" ") 
// is hash occures in middle of string it should be avoided 
void extract(std::string & line, int & index, std::string & new_line, char over) {
  std::string raw("");
  int it = index + 1;
  while (it < line.size() && line[it] != over) {
    if (line[it] == '\\' && line.size() > it + 1) {
      raw += line.substr(it, 2);
      it++;
    } else {
      raw += line[it];
    }
    it++;
  }
  index = it;
  raw += over;
  new_line += over;
  new_line += raw;
}

// remove suffix string from first (#) other then hash between strings.

std::string filter_line(std::string line) {
  std::string new_line("");
  for (int index = 0; index < line.size(); index++) {
    if (line[index] == '#') {
      break;
    }
    if (line[index] == '\'') { // intermediate characters;
      extract(line, index, new_line, '\'');
      continue;
    } else if (line[index] == '\"') {
      extract(line, index, new_line, '\"');
      continue;
    } else {
      new_line += line[index];
    }
  }
  return new_line;
}
