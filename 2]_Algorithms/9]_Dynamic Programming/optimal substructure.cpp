// Problem statement
// A given problem is said to have Optimal Substructure Property if the optimal solution of the given problem can be obtained by using the optimal solution
//  to its subproblems instead of trying every possible way to solve the subproblems.

//  Initially we could think of a recursion with base condition like if the both strings are of 1 length, 
//  if the characters are equals, return 0, otherwise return sum of the characters
//  Then add 1 character to each string and derive one by one, you will realize that the solution to bigger problem depends on the solution to smaller problems. 
// 
//  Let's say we want to derive the minimum ascii delete sum for the string s1 and s2 whose length m and n respectively. Ultimately, we want to return dp[m][n]  
//  else we have three options
//  Consider the first row and first columns of the dp array separately to fill out
public
int minimumDeleteSum(String s1, String s2)
{
	int rows = s1.length(),
		cols = s2.length();
   //Let's define a 2d array of size (rows+1) and (cols+1), creating one extra row and column so that we can accommodate empty strings as well. 
   ///Although the question says the strings are non-empty, we will need it to build optimal substructure.
	int[][] dp = new int[rows + 1][cols + 1];
	dp[0][0] = 0;

	// fill first row
	for (int j = 1; j <= cols; j++)
	{
		dp[0][j] = dp[0][j - 1] + (int)s2.charAt(j - 1);
	}

	// fill first col
	for (int i = 1; i <= rows; i++)
	{
		dp[i][0] = dp[i - 1][0] + (int)s1.charAt(i - 1);
	}

	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= cols; j++)
		{
			char ch1 = s1.charAt(i - 1),
				 ch2 = s2.charAt(j - 1);
      //If s1.charAt(i) == s2.charAt(j), then we can simply say dp[i][j] = dp[i-1][j-1]
			if (ch1 == ch2)
			{
				dp[i][j] = dp[i - 1][j - 1];
			}
			else
			{
				//  delete the last char of first string and calculate the cost: s1.charAt(i) + dp[i-1][j]
				int cand1 = (int)ch1 + dp[i - 1][j],
				//  delete the last char of second string and caclulate cost: s1.charAt(j) + dp[i][j-1]
					cand2 = (int)ch2 + dp[i][j - 1],
					//  delete both string's last characters and calculate cost: s1.charAt(i) + s2.charAt(j) + dp[i-1][j-1]
					cand3 = (int)ch1 + (int)ch2 + dp[i - 1][j - 1];
					
               //  dp[i][j] = Min(above 3 candidates)
				dp[i][j] = Math.min(cand1, Math.min(cand2, cand3));
			}
		}
	}

	return dp[rows][cols];
}
