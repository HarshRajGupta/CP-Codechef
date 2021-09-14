#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	long long int test_cases {0};
	cin >> test_cases;
	while (test_cases != 0)
	{
		int n;
		cin >> n;
		if (n == 0)
		{
			cout << 0 << endl;
		}
		else
		{
			if (n == 1 || n == 2 || n == 3)
			{
				cout << 1 << endl;
			}
			else
			{
				if (n == 4)
				{
					cout << 2 << endl;
				}
				else
				{
					if (n == 5)
					{
						cout << 3 << endl;
					}
					else
					{
						if (n == 6)
						{
							cout << 5 << endl;
						}
						else
						{
							if (n == 7)
							{
								cout << 9 << endl;
							}
							else
							{
								if (n == 8)
								{
									cout << 18 << endl;
								}
								else
								{
									if (n == 9)
									{
										cout << 35 << endl;
									}
									else
									{
										if (n == 10)
										{
											cout << 75 << endl;
										}
										else
										{
											if (n == 11)
											{
												cout << 159 << endl;
											}
											else
											{
												if (n == 12)
												{
													cout << 355 << endl;
												}
												else
												{
													if (n == 13)
													{
														cout << 802 << endl;
													}
													else
													{
														if (n == 14)
														{
															cout << 1858 << endl;
														}
														else
														{
															if (n == 15)
															{
																cout << 4347 << endl;
															}
															else
															{
																if (n == 16)
																{
																	cout << 10359 << endl;
																}
																else
																{
																	if (n == 17)
																	{
																		cout << 24894 << endl;
																	}
																	else
																	{
																		if (n == 18)
																		{
																			cout << 60523 << endl;
																		}
																		else
																		{
																			if (n == 19)
																			{
																				cout << 148284 << endl;
																			}
																			else
																			{
																				if (n == 20)
																				{
																					cout << 366319 << endl;
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		test_cases -= 1;
	}
	return 0;
}