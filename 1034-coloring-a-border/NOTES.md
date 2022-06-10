if(row<0 or col<0 or row>=grid.size() or col>= grid[0].size()) {
Border = true;
continue;
}
if(!visited[row][col] and grid[row][col] != val) {
Border = true;
continue;
}
if(!visited[row][col]) {
q.push({row,col});
visited[row][col] = true;
}
}
if(Border)
grid[x.first][x.second] = color;
}
return grid;
​
}
};
```