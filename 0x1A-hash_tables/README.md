# 0x1A. C - Hash tables
## Resources
**Read or watch:**
- [What is a HashTable Data Structure - Introduction to Hash Tables , Part 0](https://intranet.alxswe.com/rltoken/IQVfdxJlS6jhAgcuUoCseg)
- [Hash function](https://intranet.alxswe.com/rltoken/ZKpRI_FxOxAz80Onpfy0Ew)
- [All about hash tables](https://intranet.alxswe.com/rltoken/3RwwAqmpGJpMiBa7BE9fAQ)
- [why hash tables and not arrays](https://intranet.alxswe.com/rltoken/OgO7uga3PIaCTMtTzYCY3g)

### General
- What is a hash function
- What makes a good hash function
- What is a hash table, how do they work and how to use them
- What is a collision and what are the main ways of dealing with collisions in the context of a hash table
- What are the advantages and drawbacks of using hash tables
- What are the most common use cases of hash tables

## More Info
### Data Structures
Please use these data structures for this project:
```
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;
```

### Tests
We strongly encourage you to work all together on a set of tests

### Python Dictionaries
Python dictionaries are implemented using hash tables. When you will be done with this project, you will be able to better understand the power and simplicity of Python dictionaries. So much is actually happening when you type `d = {'a': 1, 'b': 2}`, but everything looks so simple for the user. Python doesn’t use the exact same implementation than the one you will work on today though. If you are curious on how it works under the hood, here is a good blog post about [how dictionaries are implemented in Python 2.7](https://intranet.alxswe.com/rltoken/hKhDFfKKcxdM9U8GZVPOHQ) (not mandatory).

Note that all dictionaries are not implemented using hash tables and there is a difference between a dictionary and a hash table. [Read more here](https://intranet.alxswe.com/rltoken/6wE80OFPwL-As1zGh2iMFg) (not mandatory).

## Tasks
### 0. >>> ht = {}
- `0-hash_table_create.c` - a function that creates a hash table.
### 1. djb2
- `1-djb2.c` - a hash function implementing the djb2 algorithm.
### 2. key -> index
- `2-key_index.c` - a function that gives you the index of a key.
### 3. >>> ht['betty'] = 'cool'
- `3-hash_table_set.c` - a function that adds an element to the hash table.
### 4. >>> ht['betty']
- `4-hash_table_get.c` - a function that retrieves a value associated with a key.
### 5. >>> print(ht)
- `5-hash_table_print.c` - a function that prints a hash table.
### 6. >>> del ht
- `6-hash_table_delete.c` - a function that deletes a hash table.
### 7. $ht['Betty'] = 'Cool'
- `100-sorted_hash_table.c` - rewriting the previous functions using prototype data structures.
