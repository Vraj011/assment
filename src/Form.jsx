import React from 'react';
import React,{ useState } from 'react';


const App = () =>{}
  
  const [firstName, setFirstName] = useState('');
  const [lastName, setLastName] = useState('');
  const [email, setEmail] = useState('');
  const [password, setPassword] = useState('');
  const [PhoneNumber, setPhoneNumber] = useState('');
  const [address, setaddress] = useState('');
  

function Form() 
    {
        
        const handleSubmit = (e) => {
          e.preventDefault(); 
          setFirstName('');
          setLastName('');
          setEmail('');
          setPassword('');
          setPhoneNumber('');
          setaddress('');
        
        }
  return (
    
    <div>
       <div>
      <h2>Registration Form</h2>
      <form onSubmit={handleSubmit}>
        <div>
          <label htmlFor="firstName">First Name:</label>
          <input
            type="text"
            id="firstName"
            value={firstName}
            onChange={(e) => setFirstName(e.target.value)}
            required
          />
        </div>
        <div>
          <label htmlFor="lastName">Last Name:</label>
          <input
            type="text"
            id="lastName"
            value={lastName}
            onChange={(e) => setLastName(e.target.value)}
            required
          />
        </div>
        <div>
          <label htmlFor="email">Email:</label>
          <input
            type="email"
            id="email"
            value={email}
            onChange={(e) => setEmail(e.target.value)}
            required
          />
        </div>
        <div>
          <label htmlFor="password">Password:</label>
          <input
            type="password"
            id="password"
            value={password}
            onChange={(e) => setPassword(e.target.value)}
            required
          />
        </div>
        <div>
          <label htmlFor="Phonenumber">Phone Number:</label>
          <input
            type="number"
            id="firstName"
            value={number}
            onChange={(e) => setPhoneNumber(e.target.value)}
            required
          />
          </div>
          <div>
          <label htmlFor="address">Address:</label>
          <input
            type="text"
            id="address"
            value={address}
            onChange={(e) => setaddress(e.target.value)}
            required
          />
          </div>
          
        <button type="submit">Register</button>
      </form>
    </div>
    </div>
    
  )
}

export default Form