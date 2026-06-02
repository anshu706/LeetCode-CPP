Question: 1 - Two Sum

💻 Approach:
We are given an array nums and a target value.
Our task: find indices of two numbers such that they add up to the target.

1️⃣ Traverse the array once while keeping track of seen elements.  
 2️⃣ For each number x, compute its complement: target - x.  
 3️⃣ If the complement already exists in a hash map, we’ve found the solution.  
 4️⃣ Otherwise, store the current number with its index for future lookups.

⏱ Time Complexity: O(n)  
 📦 Space Complexity: O(n)  
✨ Key Insight:
Trading extra space for time using a hash map transforms a brute-force O(n²) solution into an optimal O(n) approach.

<img width="1366" height="768" alt="image" src="https://github.com/user-attachments/assets/7b72397e-2d2e-4e43-83ed-3d945dab57f9" />

Question: 7 – Reverse Integer

💻 Approach:
We are given a signed 32-bit integer x.
Our task: reverse its digits while ensuring the result stays within the valid 32-bit signed integer range [−231,231−1][-2³¹, 2³¹ − 1][−231,231−1].

1️⃣ Extract the last digit using modulo (x % 10).  
 2️⃣ Remove the digit from x using integer division (x / 10).  
 3️⃣ Before appending the digit, check for overflow or underflow conditions.  
 4️⃣ If reversing exceeds the allowed range, return 0; otherwise, build the reversed number incrementally.

⏱ Time Complexity: O(log₁₀ n)  
 📦 Space Complexity: O(1)  
✨ Key Insight:
Careful boundary checks are crucial—integer overflow is a logical pitfall, not just a language limitation.

 <img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/32d98142-727a-4eb6-9c76-db52922000db" />

Question: 206 – Reverse Linked List

💻 Approach:
We are given the head of a singly linked list.
Our task: Reverse the list and return the new head.

1️⃣ Initialize two pointers: prev as NULL and curr pointing to head.  
 2️⃣ Traverse the list while keeping track of the next node.  
 3️⃣ Reverse the next pointer of the current node to point to prev.  
 4️⃣ Move prev and curr one step forward.  
 5️⃣ Once traversal ends, prev becomes the new head of the reversed list.

⏱ Time Complexity: O(n)  
 📦 Space Complexity: O(1)  
✨ Key Insight:
Pointer manipulation is powerful—once you control references, you control the structure.

 <img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/13c26024-5370-4c4b-b5c7-649462281d38" />

Question: 9 – Palindrome Number

💻 Approach:
We are given an integer x.
Our task: determine whether x is a palindrome—i.e., it reads the same forward and backward.

1️⃣ Immediately return false for negative numbers and numbers ending with 0 (except 0 itself).  
 2️⃣ Reverse only half of the number instead of the entire integer.  
 3️⃣ Compare the remaining half with the reversed half.  
 4️⃣ For odd-length numbers, ignore the middle digit during comparison.

⏱ Time Complexity: O(log₁₀ n)  
 📦 Space Complexity: O(1)  
✨ Key Insight:
You don’t always need to process the entire input—sometimes half is enough.

 <img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/269d8a83-8b6e-48fe-b6aa-fee62dadabe3" />

Question: 125 – Valid Palindrome
💻 Approach:
We are given a string s.
Our task: determine whether it is a palindrome after converting all letters to lowercase and removing all non-alphanumeric characters.

1️⃣ Initialize two pointers: one at the start (left) and one at the end (right).  
 2️⃣ Skip non-alphanumeric characters from both ends.  
 3️⃣ Compare characters case-insensitively using tolower.  
 4️⃣ If any mismatch occurs, return false.  
 5️⃣ If all valid characters match, return true.

⏱ Time Complexity: O(n)  
 📦 Space Complexity: O(1)  
✨ Key Insight:
Preprocessing isn’t always necessary—smart pointer movement can handle validation on the fly.

 <img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/2e6d37dd-fbdd-4c52-b7c4-7303aefb8a80" />

Question: 169 – Majority Element

💻 Approach:
We are given an array nums of size n.
Our task: find the element that appears more than ⌊n / 2⌋ times (guaranteed to exist).

1️⃣ Initialize a candidate element and a counter.  
 2️⃣ Traverse the array:  
 • If the current element matches the candidate, increment the count.  
 • Otherwise, decrement the count.  
 3️⃣ When the count reaches zero, update the candidate to the current element and reset the count.  
 4️⃣ After traversal, the remaining candidate is the majority element.

⏱ Time Complexity: O(n)  
 📦 Space Complexity: O(1)  
✨ Key Insight:
You don’t need frequency maps when a majority is guaranteed—pair cancellation is enough.

 <img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/48750ad1-1452-4770-a5a2-7bc9cfb20ec2" />

Question: 70 – Climbing Stairs

💻 Approach:
We are given an integer n, representing the number of steps to reach the top.
Each time, we can climb either 1 step or 2 steps.
Our task: compute the total number of distinct ways to reach the top.

1️⃣ Use Dynamic Programming to break the problem into subproblems.  
 2️⃣ Let dp[i] represent the number of ways to reach step i.  
 3️⃣ Base cases:  
 • dp[0] = 1 (one way to stay at the ground)  
 • dp[1] = 1  
 4️⃣ Recurrence relation:
dp[n] = dp[n-1] + dp[n-2]  
 5️⃣ Use memoization to avoid redundant calculations.

⏱ Time Complexity: O(n)  
 📦 Space Complexity: O(n)  
✨ Key Insight:
Problems that look recursive often hide an optimal dynamic programming solution when overlapping subproblems exist.

<img width="800" height="449" alt="image" src="https://github.com/user-attachments/assets/6226bc85-d4af-4ddd-adb9-47c1330bc940" />

Question: 344 – Reverse String

💻 Approach:
We are given a character array s.
Our task: reverse the string in-place using O(1) extra memory.

1️⃣ Initialize two pointers: one at the start (left) and one at the end (right).  
2️⃣ Swap the characters at left and right.  
3️⃣ Move left forward and right backward.  
4️⃣ Repeat until both pointers meet.

⏱ Time Complexity: O(n)  
📦 Space Complexity: O(1)  
✨ Key Insight:
Reversal doesn’t require extra arrays—careful pointer manipulation is enough.

<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/23f0eed1-8c35-40c7-af77-af488741b9be" />

Question: 136 – Single Number

💻 Approach:
We are given an array where every element appears twice except one.  
 The goal is to find that unique element in linear time and constant space.  
🔑 Key Insight:
Using the XOR (^) operator
a ^ a = 0 → duplicate elements cancel out
a ^ 0 = a → the unique element remains
By XOR-ing all elements together, all pairs vanish, leaving only the single number.

This allows us to solve the problem in one pass without extra memory.  
⏱ Time Complexity: O(n)  
 📦 Space Complexity: O(1)  
💡 DSA Lesson Reinforced:
Sometimes the most optimal solution isn’t about data structures—it’s about understanding bitwise properties.

 <img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/086ff97b-2be3-4007-8292-466d247f4455" />

Question: 217 – Contains Duplicate
💻 Approach:  
We are given an integer array nums.
Our task: determine whether any element appears at least twice in the array.  
1️⃣ Sort the array to bring duplicate values next to each other.  
2️⃣ Traverse the array and compare each element with the next one.  
3️⃣ If any adjacent elements are equal, return true.  
4️⃣ If no duplicates are found after traversal, return false.

⏱ Time Complexity: O(n log n) (due to sorting)  
📦 Space Complexity: O(1) (in-place sort, ignoring input modification)  
✨ Key Insight:
Sometimes a simple preprocessing step like sorting can significantly simplify the problem logic.

<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/034624e5-5b85-4f19-920c-572c39275218" />

Question: 66 – Plus One  
💻 Approach:
We are given a large integer represented as an array of digits.
Our task: increment the number by one and return the resulting digit array.  
1️⃣ Start traversing the digits from the last index (least significant digit).  
2️⃣ If the current digit is less than 9, increment it and return the array.  
3️⃣ If the digit is 9, set it to 0 and continue moving left (carry propagation).  
4️⃣ If all digits become 0, insert 1 at the beginning of the array.  
5️⃣ Return the final updated digits.

⏱ Time Complexity: O(n)  
📦 Space Complexity: O(1) (in-place modification, excluding output)  
✨ Key Insight:
Handling carry correctly is the core challenge—once mastered, the solution becomes very intuitive.

<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/9eb95ded-d1b4-45b2-b71b-a7a2f06205b4" />

Question: 13 – Roman to Integer  
💻 Approach:
We are given a Roman numeral string and need to convert it into its integer value.  
Key idea:
Roman numerals are usually written from larger to smaller values, except when subtraction is involved (like IV, IX, CM).  
1️⃣ Map each Roman symbol to its integer value.  
 2️⃣ Traverse the string from left to right.  
 3️⃣ If the current symbol is smaller than the next one, subtract it.  
 4️⃣ Otherwise, add it to the result.  
 5️⃣ Return the accumulated sum.

⏱ Time Complexity: O(n)  
 📦 Space Complexity: O(1)  
✨ Key Insight:
The trick isn’t memorizing Roman rules—it’s recognizing that relative order matters more than absolute values.

<img width="1280" height="720" alt="image" src="https://github.com/user-attachments/assets/f5961a6f-9caf-40ab-9b64-6bcf04f1c200" />

🔪 Problem No: 53 – Maximum Subarray
💻 Approach:
We are given an integer array nums.
Our task is to find the contiguous subarray with the largest sum and return that sum.

1️⃣ Initialize two variables:
• currSum to track the current subarray sum  
 • maxSum to store the maximum sum seen so far  
2️⃣ Traverse the array element by element.  
3️⃣ Add the current value to currSum.  
4️⃣ Update maxSum with the maximum of currSum and maxSum.  
5️⃣ If currSum becomes negative, reset it to 0 (it won’t help future subarrays).  
6️⃣ After traversing the array, return maxSum.

⏱ Time Complexity: O(n)  
📦 Space Complexity: O(1)  
✨ Key Insight:
The maximum subarray either extends the previous subarray or starts fresh at the current element—there’s no benefit in carrying a negative sum forward.

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/1baf3000-e3db-480f-ae45-c3f60a4a9e13" />

Question: 104 – Maximum Depth of Binary Tree

💻 Approach:
We are given the root of a binary tree.
Our task: find the maximum depth, i.e., the number of nodes on the longest path from the root to the farthest leaf.

1️⃣ If the current node is NULL, return 0 (base case).  
2️⃣ Recursively compute the depth of the left subtree.  
3️⃣ Recursively compute the depth of the right subtree.  
4️⃣ Take the maximum of left and right depths and add 1 for the current node.  
5️⃣ Return the final depth.

⏱ Time Complexity: O(n)  
 (each node is visited exactly once)  
📦 Space Complexity: O(h)  
 (where h is the height of the tree due to recursion stack; worst case O(n))  
✨ Key Insight:
Tree problems often become simple once you clearly define the base case and trust recursion to handle subtrees correctly.

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/d512a78f-604b-42d7-ade9-5e134d4d6a6b" />

Question: 543 – Diameter of Binary Tree

💻 Approach:
We are given the root of a binary tree.
Our task is to find the diameter of the tree, defined as the length (number of edges) of the longest path between any two nodes.  
This path may or may not pass through the root.  
1️⃣ Use Depth-First Search (DFS) to compute the height of each subtree.  
2️⃣ At every node, calculate the possible diameter passing through that node as:
left subtree height + right subtree height.  
3️⃣ Maintain a variable to track the maximum diameter found so far.  
4️⃣ Return the height of the current node as:
1 + max(left height, right height) to support parent calculations.  
5️⃣ After traversing the entire tree, return the stored maximum diameter.

⏱ Time Complexity: O(n) — each node is visited once.  
📦 Space Complexity: O(h) — recursion stack, where h is the height of the tree
(O(n) in the worst case of a skewed tree).  
✨ Key Insight:
The diameter of a binary tree is not the same as its height.  
 It’s about combining heights from both sides at every node.

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/d02e0172-f899-4fcc-a3fd-de6fa9348cfb" />

Question: 50 – Pow(x, n)
💻 Approach:
We are given a number x and an integer n.  
Our task: compute xnx^nxn efficiently, even when n is very large or negative.  
Instead of multiplying x repeatedly (which would be slow), we use Binary Exponentiation.  
1️⃣ Handle base cases upfront:  
If n == 0, return 1.  
If x == 0, return 0.  
If x == 1 or x == -1, return the result directly based on n.  
2️⃣ Convert n into a long variable to safely handle large negative values.  
3️⃣ If n is negative:  
Convert the problem to (1/x)−n(1/x)^{-n}(1/x)−n.  
4️⃣ Initialize ans = 1.  
5️⃣ While n > 0:  
If n is odd, multiply ans by x.  
Square x.  
Divide n by 2.  
6️⃣ Return ans as the final result.

⏱ Time Complexity: O(log n)  
📦 Space Complexity: O(1)  
✨ Key Insight:
Breaking the exponent into binary form is the trick—each bit decides whether the current power of x contributes to the final answer.

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/2226a18b-8406-47f4-ae35-c08b3fcd5bda" />

Question: 121 – Best Time to Buy and Sell Stock

💻 Approach:  
We are given an array where each element represents the stock price on a given day.
Our goal is to maximize profit by buying once and selling once in the future.

1️⃣ Initialize bestBuy as the price on day 0 (minimum price seen so far).  
2️⃣ Initialize maxProfit as 0.  
3️⃣ Traverse the array from day 1 onwards.  
4️⃣ For each day:  
Calculate the profit if we sell today (current price - bestBuy).  
Update maxProfit if this profit is higher.  
Update bestBuy if today’s price is lower than the previous best.  
5️⃣ Return maxProfit.

⏱ Time Complexity: O(n)  
📦 Space Complexity: O(1)  
✨ Key Insight:
The real trick isn’t finding the maximum difference—it’s tracking the minimum price before the current day.
Once that clicks, the solution becomes straightforward.

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/75dd3875-245e-434b-b311-06d088e912c9" />

Question: 141 – Linked List Cycle

💻 Approach:
We are given the head of a singly linked list.  
Our task: determine whether the linked list contains a cycle.  
To solve this efficiently, we use Floyd’s Cycle Detection Algorithm (Tortoise & Hare).  
1️⃣ Initialize two pointers:  
slow moves one step at a time  
fast moves two steps at a time  
2️⃣ Traverse the list while fast and fast->next are not NULL.  
3️⃣ Move slow by one node and fast by two nodes.  
4️⃣ If at any point slow == fast, a cycle exists → return true.  
5️⃣ If traversal ends without collision, no cycle exists → return false.

⏱ Time Complexity: O(n)  
📦 Space Complexity: O(1) (no extra memory used)  
✨ Key Insight:
Detecting cycles doesn’t require extra data structures—smart pointer movement is enough.

<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/ed3677ea-f05e-4248-8f92-cc0d2a5f11ba" />

Question: 142 – Linked List Cycle II
💻 Approach:
We are given the head of a linked list and need to find the node where a cycle begins.  
 If no cycle exists, return null.

🔍 Strategy Used: Floyd’s Cycle Detection Algorithm (Tortoise & Hare)  
1️⃣ Initialize two pointers:  
Slow (s) → moves one step at a time  
Fast (f) → moves two steps at a time  
2️⃣ Traverse the list:  
If fast and slow meet, a cycle is confirmed.  
3️⃣ To find the starting node of the cycle:  
Create a new pointer start at head.  
Move start and slow one step at a time.  
The node where they meet is the cycle entry point.  
4️⃣ If fast reaches NULL, there is no cycle.

⏱ Time Complexity: O(n)  
📦 Space Complexity: O(1) (no extra data structures used)  
✨ Key Insight:
Detecting a cycle is only half the problem — finding where it starts is the real challenge.

<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/799b4c89-160d-4eb4-8dc6-fcd52c0f2a4d" />

Question: 226 – Invert Binary Tree  
💻 Approach:  
We are given the root of a binary tree.  
Our task is to invert the tree — that is, swap the left and right children of every node.  
We use recursion to solve this efficiently.

1️⃣ If the current node is NULL, return NULL (base case).  
2️⃣ Recursively invert the left subtree.  
3️⃣ Recursively invert the right subtree.  
4️⃣ Swap the left and right child pointers of the current node.  
5️⃣ Return the root after inversion.

⏱ Time Complexity: O(n)  
(Each node is visited exactly once)  
📦 Space Complexity: O(h)  
(Recursive call stack, where h is the height of the tree)  
✨ Key Insight:
Tree problems often become simpler when you think recursively — invert subtrees first, then fix the current node.  
This process continues until all nodes are processed.

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/e3ef7baa-8267-405c-8215-87eb1e8265d9" />

Question: 236 – Lowest Common Ancestor of a Binary Tree

💻 Approach:
We are given a binary tree and two nodes p and q.  
Our task is to find their Lowest Common Ancestor (LCA) — the lowest node in the tree that has both p and q as descendants (a node can be a descendant of itself).  
🔍 Key idea:
We use recursive DFS to explore the tree and identify where p and q appear.

1️⃣ If the current node is NULL, return NULL.  
2️⃣ If the current node matches p or q, return the current node.  
 (This handles cases where one node is an ancestor of the other.)  
3️⃣ Recursively search for p and q in the left and right subtrees.  
4️⃣ If both left and right recursive calls return non-null,  
 → the current node is the LCA.  
5️⃣ If only one side returns a non-null node, propagate that value upward.  
6️⃣ If both sides return NULL, return NULL.

⏱ Time Complexity: O(n)  
(Each node is visited once.)  
📦 Space Complexity: O(h)  
(Recursive call stack, where h is the height of the tree.)
✨ Key Insight:
You don’t need parent pointers or extra data structures.
The LCA emerges naturally from post-order traversal logic.

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/6406b5de-e5a8-4686-89cd-64ecfc76323b" />

Question: 199 – Binary Tree Right Side View
💻 Approach:
We are given the root of a binary tree.  
Our goal is to return the nodes visible when the tree is viewed from the right side, ordered from top to bottom.  
To solve this, we use Level Order Traversal (BFS).  
1️⃣ If the tree is empty, return an empty result.  
2️⃣ Use a queue to traverse the tree level by level.  
3️⃣ For each level, count the number of nodes (level size).  
4️⃣ Traverse all nodes in the current level:  
Add left and right children to the queue for the next level.  
When processing the last node of the level, store its value (this node is visible from the right side).  
5️⃣ Repeat until all levels are processed.  
6️⃣ Return the collected right-side view values.

⏱ Time Complexity: O(n)  
Each node is visited exactly once.  
📦 Space Complexity: O(n)  
Queue storage for level-order traversal in the worst case.  
✨ Key Insight:  
This problem isn’t about “right children only”— it’s about identifying the last node at every depth level, regardless of tree shape.

<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/af5e500d-ca28-4fab-86bf-f6d8e71a4e50" />

Question: 24 – Swap Nodes in Pairs  
💻 Approach:  
We are given a singly linked list, and our task is to swap every two adjacent nodes without changing node values—only pointers.  
To simplify pointer manipulation, we use a dummy node before the head.  
1️⃣ Create a dummy node and point it to the head of the list.  
 This helps handle edge cases (like swapping the first pair).  
2️⃣ Use a pointer (temp) starting from the dummy node.  
3️⃣ While there are at least two nodes ahead, identify the pair:  
c1 → first node  
c2 → second node  
4️⃣ Swap the nodes by rearranging pointers:  
Point c1 to c2->next  
Point c2 to c1  
Connect temp to c2 (new head of the pair)  
5️⃣ Move temp forward and repeat until the list ends.  
6️⃣ Return dummy->next as the new head.  
⏱ Time Complexity: O(n)  
 (Each node is visited once)  
📦 Space Complexity: O(1)  
 (Constant extra space; swaps done in-place)

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/2c6f76c4-8416-467f-bf9f-0dcbad07be82" />

Question: 2351 – First Letter to Appear Twice  
💻 Approach:  
We are given a string of lowercase English letters.  
Our task: return the first character whose second occurrence appears earliest in the string.  
Instead of tracking all positions, we can solve this efficiently in one pass.  
1️⃣ Create an integer array of size 26 to store the frequency of each character.  
2️⃣ Traverse the string from left to right.  
3️⃣ For each character, increment its frequency count.  
4️⃣ The moment any character’s count becomes 2, return that character immediately.  
5️⃣ Since the problem guarantees at least one repeated character, this approach always succeeds.

⏱ Time Complexity: O(n)  
📦 Space Complexity: O(1) (fixed-size array of 26 letters)  
✨ Key Insight:  
You don’t need to store indices or compare multiple characters—early exit during traversal is the smartest optimization here.

<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/4eff8877-ad25-4527-9b66-4b5f845a86b1" />

Question: 1137 – N-th Tribonacci Number  
💻 Approach:  
We are given an integer n and need to compute the n-th Tribonacci number, where:  
T0 = 0, T1 = 1, T2 = 1  
Tn = T(n−1) + T(n−2) + T(n−3) for n ≥ 3  
1️⃣ Handle base cases directly (n = 0, 1, 2) to avoid unnecessary computation.  
2️⃣ Use an array arr[] to store previously computed Tribonacci values.  
3️⃣ Initialize the first three values according to the definition.  
4️⃣ Iterate from 3 to n, building the solution bottom-up using Dynamic Programming.  
5️⃣ Return arr[n] as the final answer.

⏱ Time Complexity: O(n)  
📦 Space Complexity: O(n)  
✨ Key Insight:
This problem is a classic example of DP with overlapping subproblems — once the recurrence relation is clear, the solution becomes straightforward.

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/2556fdd5-90d2-4982-8b78-efed7b2b0f26" />

Question: 876 – Middle of the Linked List

💻 Approach:  
We are given the head of a singly linked list.  
Our task: return the middle node of the list.  
If there are two middle nodes, return the second one.  
To solve this efficiently, we use the two-pointer technique:

1️⃣ Initialize two pointers:  
slow → moves one step at a time  
fast → moves two steps at a time  
2️⃣ Traverse the list while fast and fast->next are not NULL.  
3️⃣ Move slow by one node and fast by two nodes in each iteration.  
4️⃣ When fast reaches the end of the list, slow will be at the middle.  
5️⃣ Return the node pointed to by slow.

⏱ Time Complexity: O(n)  
📦 Space Complexity: O(1) (no extra memory used)  
✨ Key Insight:  
The fast & slow pointer technique is a powerful pattern for linked list problems—
simple, elegant, and extremely efficient.

<img width="1920" height="1080" alt="Screenshot 2026-01-29 122214" src="https://github.com/user-attachments/assets/0b671ee5-7b84-4ed7-aec4-da00ef00e71e" />

Question: 739 – Daily Temperatures

💻 Approach:  
We’re given a list of daily temperatures.  
For each day, we need to find how many days ahead a warmer temperature occurs.  
If no warmer day exists, the answer is 0.  
To solve this efficiently, we use a Monotonic Stack.

1️⃣ Create an answer array initialized with 0.  
2️⃣ Use a stack to store indices of days (not temperatures).  
3️⃣ Traverse the array from left to right.  
4️⃣ While the stack isn’t empty and the current temperature is greater than the temperature at the stack’s top index:  
 • Pop the index  
 • Set answer[index] = current_day - index  
5️⃣ Push the current index onto the stack.  
6️⃣ Any index left in the stack has no warmer future day → remains 0.

⏱ Time Complexity: O(n)  
(each index is pushed and popped at most once)  
📦 Space Complexity: O(n)  
(for the stack and answer array)  
✨ Key Insight:
This problem looks like brute force at first, but recognizing the “next greater element” pattern turns it into a clean linear-time solution.

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/905d8cf2-abb9-40ea-ae1a-b2a812d4e0d9" />

Question: 509 – Fibonacci Number

💻 Approach:  
We are given a number n and asked to compute the n-th Fibonacci number, where each number is the sum of the previous two.

1️⃣ If n = 0, return 0 (base case).  
2️⃣ If n = 1, return 1 (base case).  
3️⃣ For n > 1, recursively calculate  
 F(n) = F(n−1) + F(n−2).  
4️⃣ The recursion continues until it reaches the base cases.  
5️⃣ The final result bubbles up through the recursive calls.

⏱ Time Complexity: O(2^n)  
(Due to repeated calculations in naive recursion)  
📦 Space Complexity: O(n)  
(Recursive call stack)  
✨ Key Insight:  
While recursion makes the logic very clean and intuitive, it is not the most efficient approach for larger values of n.

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/31e11884-d49c-42d3-84ca-82fa2766b6a5" />

Question: 389 – Find the Difference

💻 Approach:  
We are given two strings:  
s → original string  
t → shuffled version of s with one extra character added  
Our task: identify the extra character in string t.  
1️⃣ Create a frequency array of size 26 to track lowercase letters.  
2️⃣ Traverse string s and increment the frequency count of each character.  
3️⃣ Traverse string t and decrement the frequency count of each character.  
4️⃣ The character whose frequency is non-zero after both traversals is the extra letter.  
5️⃣ Convert its index back to the corresponding character and return it.

⏱ Time Complexity: O(n)  
(Single pass over both strings)  
📦 Space Complexity: O(1)  
(Fixed-size array of 26 characters)  
✨ Key Insight:  
Using frequency counting avoids sorting and extra string manipulation, making the solution efficient and elegant.

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/3dba25aa-f0cc-48c5-8668-da2fb972731e" />

Question: 231 – Power of Two

💻 Approach:
We are given an integer n, and we need to determine whether it can be expressed as a power of two, i.e., n=2x for some integer xn = 2^x \quad \text{for some integer } xn=2x for some integer xTo solve this, we use a recursive divide-by-2 strategy.  
1️⃣ If n is 0, return false (0 is not a power of two).  
2️⃣ If n is 1, return true (since 20=12^0 = 120=1).  
3️⃣ If n is odd, return false (all powers of two except 1 are even).  
4️⃣ Otherwise, divide n by 2 and recursively check the result.  
5️⃣ If the recursion eventually reaches 1, the number is a power of two.

⏱ Time Complexity:  
O(log n) — each recursive call halves the number  
📦 Space Complexity:  
O(log n) — due to recursive call stack  
✨ Key Insight:  
Powers of two have a very strict structure—continuous divisibility by 2 with no remainder.  
Recognizing this pattern makes the solution straightforward and reliable.

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/5856f83c-2f27-4c12-be6e-9eab5b2c6d86" />

Question: 326 – Power of Three

💻 Approach:  
We are given an integer n.  
Our task: determine whether n can be expressed as a power of 3, i.e.,n = 3^x for some integer x.  
1️⃣ If n is 0, return false immediately since no power of 3 equals 0.  
2️⃣ If n is 1, return true because 3^0 = 1.  
3️⃣ If n is not divisible by 3, it cannot be a power of 3 → return false.  
4️⃣ Otherwise, divide n by 3 and repeat the process recursively.  
5️⃣ If we eventually reach 1, then the number is a power of 3.

⏱ Time Complexity: O(log₃ n)  
(We divide the number by 3 at every step)

📦 Space Complexity: O(log₃ n)  
(Due to recursive function calls)

✨ Key Insight:  
The problem isn’t about multiplication—it’s about reversing the process using division and checking consistency at each step.

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/4e3f3fdc-8935-43d8-b920-6eb855c3aab8" />

Question: 342 – Power of Four

💻 Approach:  
We are given an integer n, and our task is to determine whether it can be expressed as a power of 4.  
A number is a power of four if it can be repeatedly divided by 4 until it becomes exactly 1 — without leaving a remainder at any step.  
1️⃣ If n is 0, it can never be a power of four → return false.  
2️⃣ If n is 1, it is already 4⁰ → return true.  
3️⃣ If n % 4 != 0, the number cannot be divided cleanly by 4 → return false.  
4️⃣ Otherwise, recursively check the same condition for n / 4.  
5️⃣ If the recursion eventually reaches 1, the number is a power of four.

⏱ Time Complexity: O(log₄ n)  
(We divide the number by 4 at every recursive step)  
📦 Space Complexity: O(log₄ n)  
(Recursive call stack)  
✨ Key Insight:  
Not every power of two is a power of four — checking divisibility by 4 repeatedly filters out the false positives.

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/d80c7a6c-8170-4296-91a7-db4d18de6652" />

Question: 100 – Same Tree

💻 Approach:  
We are given the roots of two binary trees p and q.  
Our task: determine whether both trees are structurally identical and contain the same node values.  
To solve this, we use recursive tree traversal.  
1️⃣ If both nodes are NULL, they are identical → return true.  
2️⃣ If one node is NULL and the other is not, structures differ → return false.  
3️⃣ If node values are different, trees are not the same → return false.  
4️⃣ Recursively compare the left subtrees and right subtrees of both trees.  
5️⃣ If all checks pass, return true.

⏱ Time Complexity: O(n)  
(each node is visited once)  
📦 Space Complexity: O(h)  
(recursion stack, where h is the height of the tree)

✨ Key Insight:  
Two trees aren’t the same just because they contain the same values —  
👉 structure matters just as much as data.

<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/4bd47714-cf27-4159-929a-9a3646cd8d99" />

Question: 101 – Symmetric Tree

💻 Approach:

We are given the root of a binary tree.
Our task is to check whether the tree is symmetric, i.e., it is a mirror of itself around the center.

To solve this, we compare the left and right subtrees recursively.

1️⃣ Create a helper function isMirror(a, b) that checks whether two trees are mirror images.

2️⃣ If both nodes are NULL, they are symmetric → return true.

3️⃣ If only one node is NULL, symmetry breaks → return false.

4️⃣ If the values of both nodes are different, return false.

5️⃣ Recursively compare:

left child of a with right child of b

right child of a with left child of b

6️⃣ The tree is symmetric if isMirror(root->left, root->right) returns true.

⏱ Time Complexity: O(n)
(Each node is visited once)

📦 Space Complexity: O(h)
(Recursive stack space, where h is the height of the tree)

✨ Key Insight:

Symmetry in trees isn’t about identical traversal—it’s about mirrored structure and values.

<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/3b05dadd-25ad-4b1f-a454-91e36d13a17c" />

Question: 701 – Insert into a Binary Search Tree

💻 Approach:

We are given the root of a Binary Search Tree (BST) and a value val that does not already exist in the tree.
Our task is to insert this value into the BST while preserving BST properties and return the root.

👉 Key BST rule:

Left subtree values < root

Right subtree values > root

🔎 Step-by-step Logic:

1️⃣ Base Case:
If the current root is NULL, we’ve found the correct position → create and return a new node with val.

2️⃣ Compare Values:

If val < root->val, recursively insert into the left subtree.

Otherwise, recursively insert into the right subtree.

3️⃣ Link the subtree back:
After insertion, return the current root to maintain the tree structure.

4️⃣ Final Output:
The root of the updated BST is returned.

⏱ Time Complexity:

O(h), where h is the height of the tree

Best case (balanced BST): O(log n)

Worst case (skewed BST): O(n)

📦 Space Complexity:

O(h) due to recursive call stack

✨ Key Insight:

Insertion in a BST is less about where you start and more about when you stop.
The moment you hit NULL, you’ve found the perfect spot.

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/692e6732-c4ce-44f0-baaf-33f01aa5bdb5" />

Question: 230 – Kth Smallest Element in a BST

💻 Approach:

We are given the root of a Binary Search Tree (BST) and an integer k.
Our task: find the k-th smallest element (1-indexed).

🔑 Key Observation:
An inorder traversal of a BST gives nodes in sorted order.

So if we traverse the tree in inorder and count nodes, the k-th visited node is our answer.

🛠 Step-by-step strategy (Iterative Inorder using Stack):

1️⃣ Initialize an empty stack to simulate recursion.

2️⃣ Traverse left as far as possible, pushing each node onto the stack.

3️⃣ When no left child exists, pop the top node from the stack.

4️⃣ Decrement k (we’ve visited one node in sorted order).

5️⃣ If k == 0, return the current node’s value — that’s the answer 🎯

6️⃣ Move to the right subtree and repeat the process.

This continues until the k-th smallest element is found.

⏱ Time Complexity: O(n) (in worst case, visiting all nodes)

📦 Space Complexity: O(h), where h is the height of the tree (stack space)

✨ Key Insight:

You don’t need to store the full inorder traversal — stop as soon as k hits zero. Early termination makes the solution efficient and clean.

<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/78f374e6-f397-4dc1-90a6-c5673bf4498e" />

Question: 144 – Binary Tree Preorder Traversal

💻 Approach:

We are given the root of a binary tree.

Our task: return the preorder traversal of its nodes' values.

Preorder follows the order:

👉 Root → Left → Right

1️⃣ If the current node is nullptr, return immediately (base case).

2️⃣ First, add the current node’s value to the result vector.

3️⃣ Recursively traverse the left subtree.

4️⃣ Recursively traverse the right subtree.

5️⃣ Return the final result vector after traversal completes.

This is implemented using a helper dfs() function that performs the recursive traversal.

⏱ Time Complexity: O(n)
Every node is visited exactly once.

📦 Space Complexity: O(h)
Where h is the height of the tree (recursive call stack).
Worst case: O(n) for a skewed tree.
Best case: O(log n) for a balanced tree.

✨ Key Insight:

Tree traversal problems become much easier once you clearly remember the traversal order.
For preorder, always think:

“Process first, then explore.”

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/d3e95e05-93a3-434f-afd5-3c58cc6dc9c5" />

Question: 94 – Binary Tree Inorder Traversal

💻 Approach:

We are given the root of a binary tree.

Our task: return the inorder traversal of its nodes’ values.

👉 Inorder traversal follows the sequence:
Left ➝ Root ➝ Right

1️⃣ If the current node is NULL, return immediately (base case).

2️⃣ Recursively traverse the left subtree.

3️⃣ Store the current node’s value into the result vector.

4️⃣ Recursively traverse the right subtree.

5️⃣ Return the final result vector.

⏱ Time Complexity: O(n)
(Every node is visited exactly once.)

📦 Space Complexity: O(h)
(Recursive stack space, where h is the height of the tree. Worst case O(n), best case O(log n) for balanced trees.)

✨ Key Insight:

Tree problems become much simpler when you clearly understand traversal order patterns.

Once you remember:
🔹 Preorder → Root–Left–Right
🔹 Inorder → Left–Root–Right
🔹 Postorder → Left–Right–Root

Half the battle is already won.

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/5ad2240e-cc08-473b-807b-c0d3439c94e6" />

Question: 145 – Binary Tree Postorder Traversal

💻 Approach:

We are given the root of a binary tree.

Our task: return the postorder traversal of its nodes’ values.

👉 Postorder traversal follows the order:
Left → Right → Root

1️⃣ If the current node is NULL, simply return (base condition).

2️⃣ Recursively traverse the left subtree.

3️⃣ Recursively traverse the right subtree.

4️⃣ Finally, add the current node’s value to the result vector.

5️⃣ Return the result after completing traversal of the entire tree.

We use a helper dfs() function to perform recursion and build the result list.

⏱ Time Complexity: O(n)
Each node is visited exactly once.

📦 Space Complexity: O(n)
In the worst case (skewed tree), recursion stack can go up to height n.

✨ Key Insight:

The order of operations in recursion matters.
Placing res.push_back(root->val) at the end ensures true postorder behavior.

<img width="1920" height="1080" alt="Screenshot 2026-01-29 105810" src="https://github.com/user-attachments/assets/2dae1b22-ed9c-4dae-85ca-d315cb069728" />

Question: 102 – Binary Tree Level Order Traversal

💻 Approach:

We are given the root of a binary tree.

Our task: return the level order traversal of its nodes’ values (left to right, level by level).

1️⃣ If the root is nullptr, return an empty result immediately (edge case handling).

2️⃣ Use a Queue (FIFO) data structure to perform Breadth-First Search (BFS).

3️⃣ Push the root node into the queue.

4️⃣ While the queue is not empty:

Store the current queue size (this represents the number of nodes at the current level).

Create a temporary vector to store this level’s values.

5️⃣ Process exactly size nodes:

Pop the front node from the queue.

Add its value to the current level vector.

Push its left child (if exists).

Push its right child (if exists).

6️⃣ After processing all nodes of that level, push the level vector into the final result.

7️⃣ Repeat until the queue becomes empty.

8️⃣ Return the final 2D vector.


⏱ Time Complexity: O(n)
Each node is visited exactly once.

📦 Space Complexity: O(n)
Queue stores at most one full level of nodes at a time.


<img width="1920" height="1080" alt="Screenshot 2026-01-29 104806" src="https://github.com/user-attachments/assets/0da1ad27-3618-4a19-a204-1a99d8f1c5d8" />

Question: 98 – Validate Binary Search Tree

💻 Approach:

We are given the root of a binary tree.

Our task: determine whether it satisfies the properties of a valid Binary Search Tree (BST).

A valid BST must follow:

Left subtree values < current node

Right subtree values > current node

Both subtrees must also be valid BSTs

1️⃣ Instead of checking only immediate children, we maintain a valid value range for each node.

2️⃣ Start with the widest possible range:
(-∞, +∞)

3️⃣ For each node:

If its value is not strictly within (minVal, maxVal), return false.

4️⃣ Recursively validate:

Left subtree with updated range (minVal, current node value)

Right subtree with updated range (current node value, maxVal)

5️⃣ If all nodes satisfy their valid ranges, return true.

⏱ Time Complexity: O(n)
(We visit each node exactly once)

📦 Space Complexity: O(h)
(Recursive call stack, where h is tree height)

✨ Key Insight:

The real trick isn’t comparing left and right —
it’s carrying the correct boundaries down the recursion.

<img width="1920" height="1080" alt="Screenshot 2026-01-29 103443" src="https://github.com/user-attachments/assets/fec6353a-1e02-4315-8b07-d535d68bc504" />

Question: 287 – Find the Duplicate Number

💻 Approach:

We are given an array nums containing n + 1 integers, where each integer is in the range [1, n].

Since there are more numbers than the range allows, at least one number must be repeated (Pigeonhole Principle 🐦).

In this solution, we use a hashing (frequency array) approach:

1️⃣ Create a frequency array hash of size n + 1, initialized with 0.

2️⃣ Traverse through the given array nums.

3️⃣ For each element, increment its count in the hash array.

4️⃣ If any element’s frequency becomes 2, return that element immediately (duplicate found).

5️⃣ If no duplicate is found (which won’t happen as per constraints), return -1.

⏱ Time Complexity: O(n)

📦 Space Complexity: O(n) (extra frequency array used)

✨ Key Insight:

The key observation is that with n + 1 numbers in range [1, n], duplication is guaranteed.

Tracking frequencies makes detection straightforward and efficient.

⚠️ Note:

This approach uses extra space, but the problem specifically asks to solve it using constant extra space and without modifying the array.

An optimized solution would use Floyd’s Cycle Detection (Tortoise and Hare Algorithm) to achieve:

⏱ Time Complexity: O(n)

📦 Space Complexity: O(1)

<img width="1920" height="1080" alt="Screenshot 2026-01-29 111248" src="https://github.com/user-attachments/assets/3fc56774-fc47-449a-9311-6a47c4ad1c32" />

Question: 11 – Container With Most Water

💻 Approach:

We are given an array where each element represents the height of a vertical line.

Our task: choose two lines such that together with the x-axis, they form a container holding the maximum amount of water.

1️⃣ Initialize two pointers:

lp at the beginning (0)

rp at the end (n - 1)

2️⃣ Calculate the width between them:
width = rp - lp

3️⃣ The height of water is limited by the shorter line:
height = min(height[lp], height[rp])

4️⃣ Compute current water stored:
area = width * height
Update maxWater if this area is greater.

5️⃣ Move the pointer pointing to the smaller height inward:

If height[lp] < height[rp], increment lp

Else, decrement rp

6️⃣ Continue until lp < rp

7️⃣ Return maxWater

⏱ Time Complexity: O(n)
(Each pointer moves at most n times)

📦 Space Complexity: O(1)
(Only variables used, no extra space)

✨ Key Insight:

Always move the pointer at the shorter height — because moving the taller one can never increase the area.

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/02b6baf3-ff72-4904-9498-044f273f2ac2" />

Question: 238 – Product of Array Except Self

💻 Approach:

We are given an integer array nums.

Our task: return an array answer where answer[i] is the product of all elements except nums[i], without using division and in O(n) time.

1️⃣ Create an output array ans of size n, initialized with 1.

2️⃣ First Pass (Prefix Product):
Traverse from left to right.
For each index i, store the product of all elements before it.
ans[i] = ans[i-1] * nums[i-1]

3️⃣ Maintain a variable suffix = 1 to store product of elements to the right.

4️⃣ Second Pass (Suffix Product):
Traverse from right to left.
Update suffix *= nums[i+1]
Multiply ans[i] *= suffix

5️⃣ Return the final ans array.

⏱ Time Complexity: O(n)

📦 Space Complexity: O(1) (excluding output array)

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/ab59de45-290d-4ed5-aa82-79e9675ca72c" />

Question: 242 – Valid Anagram

💻 Approach:

We are given two strings s and t.

Our task: check whether t is an anagram of s (both contain the same characters with the same frequency).

1️⃣ First, check if the lengths of both strings are equal.

If not, they can’t be anagrams → return false.

2️⃣ Create a frequency array of size 26 (for lowercase English letters).

3️⃣ Traverse string s and increment the count for each character.

4️⃣ Traverse string t and decrement the count for each character.

5️⃣ Finally, check the frequency array:

If all values are 0 → both strings have identical character counts → return true.

If any value is not 0 → return false.


⏱ Time Complexity: O(n)

(We traverse both strings once.)

📦 Space Complexity: O(1)

(Fixed size array of 26 characters.)

✨ Key Insight:

Instead of sorting both strings (O(n log n)), using a frequency array gives us a linear-time solution.


<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/fa5cb626-6cc1-4e3a-827a-09cc364babf9" />


Question: 387 – First Unique Character in a String

💻 Approach:

We are given a string s consisting of lowercase English letters.

Our task: find the index of the first non-repeating character. If no such character exists, return -1.

1️⃣ Create a frequency array of size 26 (for lowercase letters) and initialize all values to 0.

2️⃣ Traverse the string once and increment the count of each character using:
arr[s[i] - 'a']++

3️⃣ Traverse the string again from index 0:

If the frequency of the current character is 1, return its index immediately.

4️⃣ If no character has frequency 1, return -1.

⏱ Time Complexity: O(n)
(Two linear passes over the string)

📦 Space Complexity: O(1)
(Fixed-size array of 26 characters)

✨ Key Insight:

Using a fixed-size frequency array is more efficient than using a map because the input is limited to lowercase English letters.

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/dd0fc97b-1c08-485d-a9eb-82dec1a480b4" />

Question: 103 – Binary Tree Zigzag Level Order Traversal

💻 Approach:

We are given the root of a binary tree.

Our task: return the level order traversal of its nodes' values in zigzag order (alternate left-to-right and right-to-left).

1️⃣ If the root is NULL, return an empty result.

2️⃣ Use a queue to perform Breadth-First Search (Level Order Traversal).

3️⃣ For each level:

Get the current size of the queue (number of nodes in that level).

Create a temporary vector to store node values of that level.

Traverse all nodes of the current level.

4️⃣ Maintain a boolean flag (leftToRight):

If true → insert values from left to right.

If false → insert values from right to left (by reversing index placement).

5️⃣ After finishing a level, toggle the direction flag.

6️⃣ Push the level result into the final answer.

7️⃣ Return the final zigzag traversal.

⏱ Time Complexity: O(n)
Each node is visited exactly once.

📦 Space Complexity: O(n)
Queue + result storage in worst case.

✨ Key Insight:

Instead of reversing each level, we can directly place elements at correct indices using the zigzag direction flag — making it more efficient and clean.


<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/1d471222-da5d-4a19-896e-d33416908a78" />

Question: 105 – Construct Binary Tree from Preorder and Inorder Traversal

💻 Approach:

We are given two arrays:

Preorder traversal (Root → Left → Right)

Inorder traversal (Left → Root → Right)

Our task: reconstruct the original binary tree.

1️⃣ The first element of preorder is always the root of the tree.

2️⃣ Using a hash map, store the index of each element in inorder for O(1) lookup.

3️⃣ Find the root’s index in inorder to divide the tree into:

Left subtree (elements before root index)

Right subtree (elements after root index)

4️⃣ Recursively build:

Left subtree first (since preorder processes left before right)

Then right subtree

5️⃣ Continue until the left index exceeds the right index (base case).

⏱ Time Complexity: O(n)

Each node is processed once.

Hash map ensures O(1) lookup.

📦 Space Complexity: O(n)

Hash map storage

Recursive call stack (worst case skewed tree)

✨ Key Insight:

The critical trick is realizing that preorder gives the root instantly, and inorder helps divide the problem into smaller subtrees.

Without the hash map, searching in inorder would make the solution O(n²).

<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/70d73d0e-f132-4f8e-8828-8c2c04ea5f4f" />

Question: 106 – Construct Binary Tree from Inorder and Postorder Traversal

💻 Approach:

We are given two traversals of a binary tree:

Inorder → Left → Root → Right

Postorder → Left → Right → Root

Our task: reconstruct the original binary tree.

1️⃣ The last element of postorder is always the root of the current subtree.

2️⃣ Use a hash map to store the index of each value in the inorder array for O(1) lookup.

3️⃣ Find the root’s index in inorder to divide the tree into:

Left Subtree → elements before root index

Right Subtree → elements after root index

4️⃣ Since postorder processes nodes as Left → Right → Root,
while traversing backward, we must:

Build the right subtree first

Then build the left subtree

5️⃣ Use recursion to repeat this process until the subtree range becomes invalid.

⏱ Time Complexity: O(n)
(Each node is processed once, hashmap ensures O(1) lookup)

📦 Space Complexity: O(n)
(HashMap + recursion stack in worst case)

✨ Key Insight:

The most important trick is building the right subtree first because we are consuming postorder from the end.

Understanding traversal properties deeply makes tree construction problems much easier.

<img width="800" height="450" alt="image" src="https://github.com/user-attachments/assets/eca53b86-04cb-4719-8a06-cd9f61df8ca6" />

Question: 107 – Binary Tree Level Order Traversal II

💻 Approach:

We are given the root of a binary tree.

Our task: return the level order traversal from bottom to top.

1️⃣ If the root is NULL, return an empty result.

2️⃣ Use a queue to perform Breadth-First Search (BFS).

3️⃣ Push the root node into the queue.

4️⃣ While the queue is not empty:

Get the current level size.

Traverse all nodes of that level.

Store their values in a temporary vector.

Push their left and right children (if they exist) into the queue.

5️⃣ Append each level’s values into the result.

6️⃣ After completing BFS (top-down order), reverse the result to get bottom-up order.

7️⃣ Return the final reversed result.

⏱ Time Complexity: O(n)
Each node is visited exactly once.

📦 Space Complexity: O(n)
Queue and result storage may hold up to n nodes in the worst case.

✨ Key Insight:

Instead of modifying BFS logic to insert levels at the beginning (which can be inefficient), it’s cleaner and more readable to collect normally and reverse once at the end.

<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/55f121ac-cb6e-4fd7-a7f5-874a569ae8c1" />

