import { BrowserRouter,Routes, Route } from "react-router-dom"; 
import Form from "./Form";

function App(){
  return (
    <BrowserRouter>
    <Routes>
      <Route path="/" index element={<><Form/></>}></Route>
    </Routes>
    </BrowserRouter>
       
  );
}

export default App;
