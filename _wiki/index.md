---
layout: wiki
wiki: true
title: E-Maxx Algorithms in English from CP-Algorithms
---

## Articles

### Algebra

- **Fundamentals**
    - [Binary Exponentiation](./algebra/binary-exp)
    - [Euclidean algorithm for computing the greatest common divisor](./algebra/euclid-algorithm)
    - [Extended Euclidean Algorithm](./algebra/extended-euclid-algorithm)
    - [Linear Diophantine Equations](./algebra/linear-diophantine-equation)
    - [Fibonacci Numbers](./algebra/fibonacci-numbers)
- **Prime numbers**
    - [Sieve of Eratosthenes](./algebra/sieve-of-eratosthenes)
    - [Sieve of Eratosthenes With Linear Time Complexity](./algebra/prime-sieve-linear)
    - [Primality tests](./algebra/primality_tests)
    - [Integer factorization](./algebra/factorization)
- **Number-theoretic functions**
    - [Euler's totient function](./algebra/phi-function)
    - [Number of divisors / sum of divisors](./algebra/divisors)
- **Modular arithmetic**
    - [Modular Inverse](./algebra/module-inverse)
    - [Linear Congruence Equation](./algebra/linear_congruence_equation)
    - [Chinese Remainder Theorem](./algebra/chinese-remainder-theorem)
    - [Factorial modulo $p$](./algebra/factorial-modulo)
    - [Discrete Log](./algebra/discrete-log)
    - [Primitive Root](./algebra/primitive-root)
    - [Discrete Root](./algebra/discrete-root)
    - [Montgomery Multiplication](./algebra/montgomery_multiplication)
- **Number systems**
    - [Balanced Ternary](./algebra/balanced-ternary)
    - [Gray code](./algebra/gray-code)
- **Miscellaneous**
    - [Enumerating submasks of a bitmask](./algebra/all-submasks)
    - [Arbitrary-Precision Arithmetic](./algebra/big-integer)
    - [Fast Fourier transform](./algebra/fft)
    - [Operations on polynomials and series](./algebra/polynomial)

### Data Structures

- **Fundamentals**
    - [Minimum Stack / Minimum Queue](./data_structures/stack_queue_modification)
    - [Sparse Table](./data_structures/sparse-table)
- **Trees**
    - [Disjoint Set Union](./data_structures/disjoint_set_union)
    - [Fenwick Tree](./data_structures/fenwick)
    - [Sqrt Decomposition](./data_structures/sqrt_decomposition)
    - [Segment Tree](./data_structures/segment_tree)
    - [Treap](./data_structures/treap)
    - [Sqrt Tree](./data_structures/sqrt-tree)
    - [Randomized Heap](./data_structures/randomized_heap)
- **Advanced**
    - [Deleting from a data structure in O(T(n)log n)](./data_structures/deleting_in_log_n)

### Dynamic Programming

- **DP optimizations**
    - [Divide and Conquer DP](./dynamic_programming/divide-and-conquer-dp)
- **Tasks**
    - [Dynamic Programming on Broken Profile. Problem "Parquet"](./dynamic_programming/profile-dynamics)
    - [Finding the largest zero submatrix](./dynamic_programming/zero_matrix)

### String Processing

- **Fundamentals**
    - [String Hashing](./string/string-hashing)
    - [Rabin-Karp for String Matching](./string/rabin-karp)
    - [Prefix function - Knuth-Morris-Pratt](./string/prefix-function)
    - [Z-function](./string/z-function)
    - [Suffix Array](./string/suffix-array)
    - [Aho-Corasick algorithm](./string/aho_corasick)
- **Advanced**
    - [Suffix Tree](./string/suffix-tree-ukkonen)
    - [Suffix Automaton](./string/suffix-automaton)
    - [Lyndon factorization](./string/lyndon_factorization)
- **Tasks**
    - [Expression parsing](./string/expression_parsing)
    - [Manacher's Algorithm - Finding all sub-palindromes in O(N)](./string/manacher)
    - [Finding repetitions](./string/main_lorentz)

### Linear Algebra

- **Matrices**
    - [Gauss & System of Linear Equations](./linear_algebra/linear-system-gauss)
    - [Gauss & Determinant](./linear_algebra/determinant-gauss)
    - [Kraut & Determinant](./linear_algebra/determinant-kraut)
    - [Rank of a matrix](./linear_algebra/rank-matrix)

### Combinatorics

- **Fundamentals**
    - [Finding Power of Factorial Divisor](./algebra/factorial-divisors)
    - [Binomial Coefficients](./combinatorics/binomial-coefficients)
    - [Catalan Numbers](./combinatorics/catalan-numbers)
- **Techniques**
    - [The Inclusion-Exclusion Principle](./combinatorics/inclusion-exclusion)
    - [Burnside's lemma / Pólya enumeration theorem](./combinatorics/burnside)
    - [Stars and bars](./combinatorics/stars_and_bars)
    - [Generating all $K$-combinations](./combinatorics/generating_combinations)
- **Tasks**
    - [Placing Bishops on a Chessboard](./combinatorics/bishops-on-chessboard)
    - [Balanced bracket sequences](./combinatorics/bracket_sequences)
    - [Counting labeled graphs](./combinatorics/counting_labeled_graphs)

### Numerical Methods

- **Search**
    - [Ternary Search](./num_methods/ternary_search)
    - [Newton's method for finding roots](./num_methods/roots_newton)
- **Integration**
    - [Integration by Simpson's formula](./num_methods/simpson-integration)

### Geometry

- **Elementary operations**
    - [Basic Geometry](./geometry/basic-geometry)
    - [Finding the equation of a line for a segment](./geometry/segment-to-line)
    - [Intersection Point of Lines](./geometry/lines-intersection)
    - [Check if two segments intersect](./geometry/check-segments-intersection)
    - [Intersection of Segments](./geometry/segments-intersection)
    - [Circle-Line Intersection](./geometry/circle-line-intersection)
    - [Circle-Circle Intersection](./geometry/circle-circle-intersection)
    - [Common tangents to two circles](./geometry/tangents-to-two-circles)
    - [Length of the union of segments](./geometry/length-of-segments-union)
- **Polygons**
    - [Oriented area of a triangle](./geometry/oriented-triangle-area)
    - [Area of simple polygon](./geometry/area-of-simple-polygon)
    - [Check if points belong to the convex polygon in O(log N)](./geometry/point-in-convex-polygon)
    - [Minkowski sum of convex polygons](./geometry/minkowski)
    - [Pick's Theorem - area of lattice polygons](./geometry/picks-theorem)
    - [Lattice points of non-lattice polygon](./geometry/lattice-points)
- **Convex hull**
    - [Convex hull construction using Graham's Scan](./geometry/grahams-scan-convex-hull)
    - [Convex hull trick and Li Chao tree](./geometry/convex_hull_trick)
- **Sweep-line**
    - [Search for a pair of intersecting segments](./geometry/intersecting_segments)
    - [Point location in O(log N)](./geometry/point-location)
- **Miscellaneous**
    - [Finding the nearest pair of points](./geometry/nearest_points)
    - [Delaunay triangulation and Voronoi diagram](./geometry/delaunay)
    - [Vertical decomposition](./geometry/vertical_decomposition)
    - [Half-plane intersection - S&I Algorithm in O(Nlog N)](./geometry/halfplane-intersection)

### Graphs

- **Graph traversal**
    - [Breadth First Search](./graph/breadth-first-search)
    - [Depth First Search](./graph/depth-first-search)
- **Connected components, bridges, articulations points**
    - [Finding Connected Components](./graph/search-for-connected-components)
    - [Finding Bridges in O(N+M)](./graph/bridge-searching)
    - [Finding Bridges Online](./graph/bridge-searching-online)
    - [Finding Articulation Points in O(N+M)](./graph/cutpoints)
    - [Strongly Connected Components and Condensation Graph](./graph/strongly-connected-components)
    - [Strong Orientation](./graph/strong-orientation)
- **Single-source shortest paths**
    - [Dijkstra - finding shortest paths from given vertex](./graph/dijkstra)
    - [Dijkstra on sparse graphs](./graph/dijkstra_sparse)
    - [Bellman-Ford - finding shortest paths with negative weights](./graph/bellman_ford)
    - [0-1 BFS](./graph/01_bfs)
    - [D´Esopo-Pape algorithm](./graph/desopo_pape)
- **All-pairs shortest paths**
    - [Floyd-Warshall - finding all shortest paths](./graph/all-pair-shortest-path-floyd-warshall)
    - [Number of paths of fixed length / Shortest paths of fixed length](./graph/fixed_length_paths)
- **Spanning trees**
    - [Minimum Spanning Tree - Prim's Algorithm](./graph/mst_prim)
    - [Minimum Spanning Tree - Kruskal](./graph/mst_kruskal)
    - [Minimum Spanning Tree - Kruskal with Disjoint Set Union](./graph/mst_kruskal_with_dsu)
    - [Second best Minimum Spanning Tree - Using Kruskal and Lowest Common Ancestor](./graph/second_best_mst)
    - [Kirchhoff Theorem](./graph/kirchhoff-theorem)
    - [Prüfer code](./graph/pruefer_code)
- **Cycles**
    - [Checking a graph for acyclicity and finding a cycle in O(M)](./graph/finding-cycle)
    - [Finding a Negative Cycle in the Graph](./graph/finding-negative-cycle-in-graph)
    - [Eulerian Path](./graph/euler_path)
- **Lowest common ancestor**
    - [Lowest Common Ancestor](./graph/lca)
    - [Lowest Common Ancestor - Binary Lifting](./graph/lca_binary_lifting)
    - [Lowest Common Ancestor - Farach-Colton and Bender algorithm](./graph/lca_farachcoltonbender)
    - [Solve RMQ by finding LCA](./graph/rmq_linear)
    - [Lowest Common Ancestor - Tarjan's off-line algorithm](./graph/lca_tarjan)
- **Flows and related problems**
    - [Maximum flow - Ford-Fulkerson and Edmonds-Karp](./graph/edmonds_karp)
    - [Maximum flow - Push-relabel algorithm](./graph/push-relabel)
    - [Maximum flow - Push-relabel algorithm improved](./graph/push-relabel-faster)
    - [Maximum flow - Dinic's algorithm](./graph/dinic)
    - [Maximum flow - MPM algorithm](./graph/mpm)
    - [Flows with demands](./graph/flow_with_demands)
    - [Minimum-cost flow](./graph/min_cost_flow)
    - [Assignment problem. Solution using min-cost-flow in O (N^5)](./graph/Assignment-problem-min-flow)
- **Matchings and related problems**
    - [Bipartite Graph Check](./graph/bipartite-check)
    - [Kuhn' Algorithm - Maximum Bipartite Matching](./graph/kuhn_maximum_bipartite_matching)
- **Miscellaneous**
    - [Topological Sorting](./graph/topological-sort)
    - [Edge connectivity / Vertex connectivity](./graph/edge_vertex_connectivity)
    - [Tree painting](./graph/tree_painting)
    - [2-SAT](./graph/2SAT)
    - [Heavy-light decomposition](./graph/hld)

### Miscellaneous

- **Sequences**
    - [RMQ task (Range Minimum Query - the smallest element in an interval)](./sequences/rmq)
    - [Longest increasing subsequence](./sequences/longest_increasing_subsequence)
    - [Search the subsegment with the maximum/minimum sum](./others/maximum_average_segment)
    - [K-th order statistic in O(N)](./sequences/k-th)
- **Game Theory**
    - [Games on arbitrary graphs](./game_theory/games_on_graphs)
    - [Sprague-Grundy theorem. Nim](./game_theory/sprague-grundy-nim)
- **Schedules**
    - [Scheduling jobs on one machine](./schedules/schedule_one_machine)
    - [Scheduling jobs on two machines](./schedules/schedule_two_machines)
    - [Optimal schedule of jobs given their deadlines and durations](./schedules/schedule-with-completion-duration)
- **Miscellaneous**
    - [Josephus problem](./others/josephus_problem)
    - [15 Puzzle Game: Existence Of The Solution](./others/15-puzzle)
    - [The Stern-Brocot Tree and Farey Sequences](./others/stern_brocot_tree_farey_sequences)
