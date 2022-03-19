import { Text, View } from "react-native";

export default function App() {
  return (
    <div>
      <View>
        <Text>Text</Text>
        <div className="">
          <button className="flex items-center text-white bg-blue-700 focus:ring-blue-300 font-medium rounded-full text-sm px-5 py-2.5 text-center mr-2 mb-2 w-auto dark:bg-blue-600 dark:hover:bg-blue-700 dark:focus:ring-blue-800">
            <svg xmlns="http://www.w3.org/2000/svg" className="h-5 w-5" fill="none" viewBox="2.5 0 24 24" stroke="currentColor" strokeWidth={2}>
              <path strokeLinecap="round" strokeLinejoin="round" d="M20.354 15.354A9 9 0 018.646 3.646 9.003 9.003 0 0012 21a9.003 9.003 0 008.354-5.646z"/>
            </svg>
            <span>Change Theme</span>
          </button>
        </div>        
      </View>
    </div>
  )
}