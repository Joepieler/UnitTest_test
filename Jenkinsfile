pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
				 sh 'g++ -std=c++14 -o test.exe main.cpp'
            }
        }
        stage('Test') {
            steps {
                sh'./test.exe -r junit > out.xml'
            }
        }
    }
	post {
        always {
            junit 'out.xml'
        }
    }
}