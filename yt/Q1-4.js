angular.module("myapp",[])
.controller("DisplayName",function($scope){
$scope.string="Hello World";
})

.controller("addition",function($scope){
    $scope.a=354;
    $scope.b=675;
})

.controller("cricket",function($scope){
    $scope.players=["Sachin Tendulkar","Virat Kolhi","Suresh Raina","Hardik Pandya"];
   
    $scope.table=[{name:"Sachin Tendulkar",class:"india"},
    {name:"Mahendra Singh Dhoni",class:"India"},
    {name:"Sachin Tendulkar",class:"india"},
    {name:"David Warner",class:"australia"},
    {name:"Kane Williamson",class:"New Zealand"},
    {name:"Virat Kolhi",class:"india"},
    {name:"Mitchell Starc",class:"australia"}];
})

