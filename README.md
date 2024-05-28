# (SWallet) Smart Wallet System 

a smart wallet system platform in C++ on Linux.The client is able to submit his info to the bank system and do transactions on his account.
Using TCP ports for communication between the two executables, Multiple client software applications can be connected to the same smart wallet server

## Client Software:

The client software shall be able to:
1. Fill his personal info (name, age, national ID, ...)
2. Deposit money to his account
3. Withdraw money from his account
4. Get the amount of money he hasin his account from the smart walletserver
5. Send transaction to the Smart Walletserver
6. Create a user-friendly UI where the user can fill the data and interact with the server through it using

      • Qt C++.

## Server Software:

The smart wallet server shall be able to:
1. Receive the client info from the client software
2. Auto generate an account ID for new clients(initially the account has zero $)
3. Save the received info
4. Display the candidate info
      - Status barshowing the name of the client upon receiving the info
      - Multi-line text box
      - Log File of all transactionsdone
5. Process the transaction on the client account
6. Send the amount of money when requested from the client.

## Instructions and Installation 
Please, Refer to the PDF file attached inside the repo.
