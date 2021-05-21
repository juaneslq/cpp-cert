// const object cannot modify mebers nor call member functions unless they're declared as const
// pointers can be declare for not to be able to modify the addres (1) or the memory it points (2) or both (3)
// const int * ptr 
// int * const ptr
// const int * const ptr 

//friendship
// if A wants B to be able to access its private possessions, it has to announce that B is its friend. 
// The announcement works in one direction only. The B class can’t just say, “I am A’s friend” – it won’t work
// Note that it’s just like in the real word. Our friends are those we refer to as friends. People claiming that they are our friends may be liars.

// a class may be a friend of many classes
// a class may have many friends
// a friend’s friend isn’t my friend
// friendship isn’t inherited – the subclass has to define its own friendships