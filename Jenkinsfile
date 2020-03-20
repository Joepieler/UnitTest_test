pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                echo 'Building..'
				cmake /var/lib/jenkins/workspace/Test
            }
        }
        stage('Test') {
            steps {
                echo 'Testing..'
            }
        }
    }
}