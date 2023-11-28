<div>Group 2 GPU-based modeling of material degradation inside of a nuclear reactor</div>
<div>Austin Nakamatsu, Connor Oliver, Kyle Werstlein, Matthew Mills</div>
<div>Senior Software Engineering Project I</div>

# Software Development Process (SDP)

## Principles
- We are responsive with our communication and answer within 24 hours
- We will use a scrum board via Jira to continuously work on the backlog (Sprints – one week long)
- A work item will need to be discussed with our project partner before making any progress on it
    - Each task should have an acceptance criteria
- All changes will have to be done in a separate branch
    - Once these changes are done, submit a PR so others can review it
    - The PR should be reviewed by at least one, ideally 2 members (out of 4)
    - Pull request must solve the given problem/task
        - If it doesn’t fully solve the problem, another task can be made
- Want multiple small tasks that work towards one big task


## Process
- Backlog and Planning (1x a week)
    - Go over what tasks need to be completed
    - Goals to work towards
- Jira Board (To Do - In Progress - In Review - Done - Blocked)	
    - With some elements of agile
- Demo/Review with Stakeholders (2x a week)
    - TA and project partner


## Roles

In terms of project and product management, this can be done as a team.  Everyone will hold each other accountable in case one starts to fall behind.

For scrum master, this will rotate every week and will also be the scrum master in our weekly meetings with the TA.  The scrum master role will also be in charge of running the meeting for that day, managing the backlog (with the team), and getting updates from team members.

In terms of design, frontend, and backend.  This will also probably be worked on as a team but we’ll play to our team’s strength depending on the task at hand.

For data engineering and analysis, this will also be done as a team where we can play to our team’s strength or simply do it as a team via smaller subtasks.

For features, this will be done as a team alongside our project partner as we will need input from our project partner to create tasks.


## Tooling
| | |
| :------- | :-------: 
Version Control | GitHub
Project Management | Jira
Documentation | Github, Google docs, README in GitHub
Test Framework | N/A
Linting and Formatting | Linting: Not strictly defined, Formatting: gnu
CI/CD | GitHub Actions – to run unit tests
IDE | Visual Studio Code, Visual Studio
Graphic Design | Google Slides
Others | ChatGPT to aid with parallel programming and physics along with other necessary components for the project


## Definition of Done (DoD)
- Acceptance Criteria is met
- Changes are merged
- Tests are successful – doesn’t break other tests
- Reviewed by at least one (hopefully two) team members
- Changes are implemented where needed/intended
- Documentation is updated
    - Notes
    - Instructions on how to run certain code
- If code causes other tests to fail but is useful
    - Come up with an intelligent plan to solve other issues or make a loophole
- Demo is prepared for weekly meeting with project partner and TA


## Release Cycle
- Release everytime a new change is made (depending on the significance)
- Automatically deploy staging to every merge of main branch
- Systematic versioning MAJOR.MINOR.PATCH
    - Increment major with every released prototype
    - Increment minor every feature added
    - Increment patch with bug fixes released


## Environments
| Environment | Infrastructure | Deployment | What is it for? | Monitoring
| :-- | :-- | :-- | :-- | :-- 
Production | GitHub | Release | Sleeping well at night | Manual 
Staging (Test) | GitHub Action Runner | PR | New unreleased features and unit tests | Automated 
Dev | Local (Windows/Linux, not macOS) | Commit | Development and unit tests | N/A