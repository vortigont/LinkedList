//g++ -Wall -std=c++14 tests.cpp -o tests && ./tests

#include "../../LinkedList.h"
#include <assert.h> 
#include <iostream>

void GivenNothingInList_WhenSizeCalled_Returns0()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();

    //Act Assert
    assert(list.size() == 0);
}

void GivenNothingInList_WhenAddNodeAtPlace0_ReturnsTrue()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();

    //Act Assert
    assert(list.add(0, 1) == true);
}

void GivenOneNodeInList_WhenAddNodeIndexLargerThanListSize_ThenNodeAddedToEndOfList()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();
    list.add(1);

    //Act
    list.add(5, 2);
    list.add(4, 3);

    //Assert
    assert(list.get(0) == 1);
    assert(list.get(1) == 2);
    assert(list.get(2) == 3);
}

void GivenThreeNodesInList_WhenSizeCalled_Returns3()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();
    list.add(1);
    list.add(2);
    list.add(3);

    //Act Assert
    assert(list.size() == 3);
}

void GivenNothingInList_WhenUnshiftCalled_ThenListSize1()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();

    //Act
    list.unshift(1);

    //Assert
    assert(list.size() == 1);
}

void GivenOneNodeInList_WhenUnshiftCalled_ThenListSize2()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();
    list.add(1);

    //Act
    list.unshift(2);

    //Assert
    assert(list.size() == 2);
}

void GivenOneNodeInList_WhenUnshiftCalled_ThenExistingNodeLast()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();
    list.add(1);

    //Act
    list.unshift(2);

    //Assert
    assert(list.get(0) == 2);
    assert(list.get(1) == 1);
}

void GivenNothingInList_WhenSetIsCalled_ThenReturnsFalse()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();

    //Act Assert
    assert(list.set(-1, 1) == false);
    assert(list.set(0, 1) == false);
    assert(list.set(1, 1) == false);
}

void GivenThreeNodesInList_WhenSetIsCalledAtPlace1_ThenSecondNodeIsSet()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();
    list.add(0);
    list.add(1);
    list.add(2);

    //Act 
    list.set(1, 10);

    //Assert
    assert(list.get(0) == 0);
    assert(list.get(1) == 10);
    assert(list.get(2) == 2);
}

void GivenNothingInList_WhenPopIsCalled_ThenReturnsFalse()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();

    //Act Assert
    assert(list.pop() == false);
}

void GivenTwoNodesInList_WhenPopIsCalled_ThenReturnsLastNode()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();
    list.add(0);
    list.add(1);

    //Act Assert
    assert(list.pop() == 1);
}

void GivenTwoNodesInList_WhenPopIsCalled_ThenListIsShorter()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();
    list.add(0);
    list.add(1);

    //Act Assert
    assert(list.size() == 2);
    list.pop();
    assert(list.size() == 1);
}

void GivenNothingInList_WhenShiftIsCalled_ThenReturnsFalse()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();

    //Act Assert
    assert(list.shift() == false);
}

void GivenOneNodeInList_WhenShiftIsCalled_ThenReturnsData()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();
    list.add(5);

    //Act Assert
    assert(list.shift() == 5);
}

void GivenOneNodeInList_WhenShiftIsCalled_ThenListEmpty()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();
    list.add(5);

    //Act Assert
    assert(list.size() == 1);
    list.shift();
    assert(list.size() == 0);
}

void GivenThreeNodesInList_WhenShiftIsCalled_ThenReturnsFirstData()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();
    list.add(0);
    list.add(1);
    list.add(2);

    //Act Assert
    assert(list.shift() == 0);
}

void GivenThreeNodesInList_WhenShiftIsCalled_ThenListIsShorter()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();
    list.add(0);
    list.add(1);
    list.add(2);

    //Act Assert
    assert(list.size() == 3);
    list.shift();
    assert(list.size() == 2);
}

void GivenNothingInList_WhenRemoveIsCalled_ThenFalseIsReturned()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();

    //Act Assert
    assert(list.remove(0) == false);
}

void GivenThreeNodesInList_WhenRemoveIsCalledAtPlace0_ThenFirstNodeDataIsReturned()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();
    list.add(0);
    list.add(1);
    list.add(2);

    //Act Assert
    assert(list.remove(0) == 0);
}

void GivenThreeNodesInList_WhenRemoveIsCalledAtPlace2_ThenLastNodeDataIsReturned()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();
    list.add(0);
    list.add(1);
    list.add(2);

    //Act Assert
    assert(list.remove(2) == 2);
}

void GivenThreeNodesInList_WhenRemoveIsCalled_ThenListIsShorter()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();
    list.add(0);
    list.add(1);
    list.add(2);

    //Act Assert
    assert(list.size() == 3);
    list.remove(1);
    assert(list.size() == 2);
}

void GivenNothingInList_WhenGetIsCalled_ThenReturnsFalse()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();

    //Act Assert
    assert(list.get(0) == false);
}

void GivenThreeNodesInList_WhenGetIsCalled_ThenReturnsData()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();
    list.add(0);
    list.add(1);
    list.add(2);

    //Act Assert
    assert(list.get(1) == 1);
}

void GivenNothingInList_WhenClearIsCalled_ThenSizeUnchanged()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();

    //Act Assert
    assert(list.size() == 0);
    list.clear();
    assert(list.size() == 0);
}

void GivenThreeInList_WhenClearIsCalled_ThenListEmpty()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();
    list.add(0);
    list.add(1);
    list.add(2);

    //Act
    list.clear();

    //Assert
    assert(list.size() == 0);
}

// test head() method
void GivenTwoInList_WhenHeadIsCalled_ThenReturnsData()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();
    list.add(0);
    list.add(1);

    //Assert
    assert(list.head() == 0);
}

// test tail() method
void GivenTwoInList_WhenTailIsCalled_ThenReturnsData()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();
    list.add(0);
    list.add(1);

    //Assert
    assert(list.tail() == 1);
}

// test exist() method
void GivenThreeNodesInList_WhenExistCalled_ReturnsVarious()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();
    //Act Assert
    assert(list.exist(-1) == false);
    assert(list.exist(0) == false);
    assert(list.exist(1) == false);

    list.add(1);
    assert(list.exist(-1) == false);
    assert(list.exist(0) == true);
    assert(list.exist(1) == false);

    list.add(2);
    assert(list.exist(-1) == false);
    assert(list.exist(0) == true);
    assert(list.exist(1) == true);
}

// test iterators
void GivenEmptyList_WhenConstInteratorCalled_ThenCount0Elements()
{
    //Arrange
    LinkedList<int> list = LinkedList<int>();

    //Act - count sum of all elements
    int cnt = 0;
    for(const auto& i : list)   // const iterator by reference
        cnt += i;

    //Assert - sum must zero
    assert(cnt == 0);
}

// test iterators
void GivenThreeInList_WhenConstInteratorCalled_ThenCount3Elements()
{
    //Arrange
    LinkedList<int> list;
    list.add(0);
    list.add(1);
    list.add(2);

    //Act - sum all elements
    int sum = 0;
    for(const auto i : list)   // const iterator
        sum+=i;

    //Assert - sum must be eq 3
    assert(sum == 3);

    // Act - increment all elements by '1' inplace
    for (auto& i : list)
        ++i;

    //Act - sum all new elements
    sum = 0;
    for(const auto& i : list)   // const iterator by reference
        sum+=i;

    //Assert - sum must be eq 6
    assert(sum == 6);
}

void GivenTwoInList_chk_exist()
{
    //Arrange
    LinkedList<int> list;
    assert(list.exist(0) == false);
    list.add(0);
    list.add(1);

    assert(list.exist(0) == true);
    assert(list.exist(1) == true);
    assert(list.exist(2) == false);
}

int main()
{
    GivenNothingInList_WhenSizeCalled_Returns0();
    GivenNothingInList_WhenAddNodeAtPlace0_ReturnsTrue();
    GivenOneNodeInList_WhenAddNodeIndexLargerThanListSize_ThenNodeAddedToEndOfList();
    GivenThreeNodesInList_WhenSizeCalled_Returns3();
    GivenNothingInList_WhenUnshiftCalled_ThenListSize1();
    GivenOneNodeInList_WhenUnshiftCalled_ThenListSize2();
    GivenOneNodeInList_WhenUnshiftCalled_ThenExistingNodeLast();
    GivenNothingInList_WhenSetIsCalled_ThenReturnsFalse();
    GivenThreeNodesInList_WhenSetIsCalledAtPlace1_ThenSecondNodeIsSet();
    GivenNothingInList_WhenPopIsCalled_ThenReturnsFalse();
    GivenTwoNodesInList_WhenPopIsCalled_ThenReturnsLastNode();
    GivenTwoNodesInList_WhenPopIsCalled_ThenListIsShorter();
    GivenNothingInList_WhenShiftIsCalled_ThenReturnsFalse();
    GivenOneNodeInList_WhenShiftIsCalled_ThenReturnsData();
    GivenOneNodeInList_WhenShiftIsCalled_ThenListEmpty();
    GivenThreeNodesInList_WhenShiftIsCalled_ThenReturnsFirstData();
    GivenThreeNodesInList_WhenShiftIsCalled_ThenListIsShorter();
    GivenNothingInList_WhenRemoveIsCalled_ThenFalseIsReturned();
    GivenThreeNodesInList_WhenRemoveIsCalledAtPlace0_ThenFirstNodeDataIsReturned();
    GivenThreeNodesInList_WhenRemoveIsCalledAtPlace2_ThenLastNodeDataIsReturned();
    GivenThreeNodesInList_WhenRemoveIsCalled_ThenListIsShorter();
    GivenNothingInList_WhenGetIsCalled_ThenReturnsFalse();
    GivenThreeNodesInList_WhenGetIsCalled_ThenReturnsData();
    GivenNothingInList_WhenClearIsCalled_ThenSizeUnchanged();
    GivenThreeInList_WhenClearIsCalled_ThenListEmpty();
    GivenTwoInList_WhenHeadIsCalled_ThenReturnsData();
    GivenTwoInList_WhenTailIsCalled_ThenReturnsData();
    GivenThreeNodesInList_WhenExistCalled_ReturnsVarious();
    GivenEmptyList_WhenConstInteratorCalled_ThenCount0Elements();
    GivenThreeInList_WhenConstInteratorCalled_ThenCount3Elements();
    GivenTwoInList_chk_exist();

    std::cout<< "Tests pass"<< std::endl;
}
