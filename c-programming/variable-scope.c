// Variable Scope
// variables can have the same name if they are in different scope
// Global Scope
// when a variable is in global scope all regions of the code can touch that variable
int g_NumPersons = 0;

void some_other_function()
{
  int personID = 1;
}

int main() 
{
  // type name = intial value;
  int personID = 0;
  
  // personID is in local scope
  int personID += 1;

  // We can identify sub-scopes in a function by using {}
  {
    int personID = 0;
    
    int personID += 1;
  }
}
